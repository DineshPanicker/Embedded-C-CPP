#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/sys/printk.h>

#include <zephyr/drivers/can.h>
#include <zephyr/drivers/display.h>

#include <lvgl.h>
#include <stdio.h>
#include <string.h>

/* Queue for frames coming from CAN driver */
K_MSGQ_DEFINE(can_msgq, sizeof(struct can_frame), 64, 4);

/* Shared latest frame info (protected by a mutex) */
static struct can_frame latest_frame;
static bool latest_valid;
static struct k_mutex latest_lock;

static volatile uint32_t rx_count;

static lv_obj_t *title_label;
static lv_obj_t *frame_label;
static lv_obj_t *stats_label;

static void format_can_frame(char *out, size_t out_sz, const struct can_frame *f)
{
    int n = snprintf(out, out_sz, "ID:0x%03X DLC:%d", f->id, f->dlc);
    n += snprintf(out + n, out_sz - (size_t)n, "\nDATA:");
    for (int i = 0; i < f->dlc && (size_t)n < out_sz; i++)
    {
        n += snprintf(out + n, out_sz - (size_t)n, " %02X", f->data[i]);
    }
}

/* -------- Thread 1: CAN RX processing (high priority) -------- */
#define CAN_RX_STACK 2048
K_THREAD_STACK_DEFINE(can_rx_stack, CAN_RX_STACK);
static struct k_thread can_rx_thread;

static void can_rx_worker(void *a, void *b, void *c)
{
    ARG_UNUSED(a);
    ARG_UNUSED(b);
    ARG_UNUSED(c);

    printk("CAN RX thread started\n");

    while (1)
    {
        struct can_frame f;

        /* Block until a frame arrives */
        if (k_msgq_get(&can_msgq, &f, K_FOREVER) == 0)
        {
            rx_count++;

            /* Keep the latest frame for UI */
            k_mutex_lock(&latest_lock, K_FOREVER);
            latest_frame = f;
            latest_valid = true;
            k_mutex_unlock(&latest_lock);

            /* Also print to UART for debugging */
            printk("RX id=0x%X dlc=%d\n", f.id, f.dlc);
        }
    }
}

/* -------- Thread 2: UI/LVGL (low priority) -------- */
#define UI_STACK 4096
K_THREAD_STACK_DEFINE(ui_stack, UI_STACK);
static struct k_thread ui_thread;

static void ui_worker(void *a, void *b, void *c)
{
    ARG_UNUSED(a);
    ARG_UNUSED(b);
    ARG_UNUSED(c);

    const struct device *display = DEVICE_DT_GET(DT_CHOSEN(zephyr_display));
    if (!device_is_ready(display))
    {
        printk("ERROR: display not ready\n");
        return;
    }

    /* Give drivers a moment (helps on some boards) */
    k_msleep(200);

    title_label = lv_label_create(lv_scr_act());
    lv_label_set_text(title_label, "Zephyr CAN Logger");
    lv_obj_align(title_label, LV_ALIGN_TOP_MID, 0, 2);

    frame_label = lv_label_create(lv_scr_act());
    lv_label_set_text(frame_label, "Waiting for CAN frames...");
    lv_obj_align(frame_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_width(frame_label, 155);
    lv_label_set_long_mode(frame_label, LV_LABEL_LONG_WRAP);

    stats_label = lv_label_create(lv_scr_act());
    lv_label_set_text(stats_label, "RX:0 FPS:0");
    lv_obj_align(stats_label, LV_ALIGN_BOTTOM_MID, 0, 0);

    display_blanking_off(display);

    uint32_t last_ms = k_uptime_get_32();
    uint32_t last_rx = 0;

    while (1)
    {
        /* Update frame label if we have something */
        struct can_frame f;
        bool valid = false;

        k_mutex_lock(&latest_lock, K_FOREVER);
        if (latest_valid)
        {
            f = latest_frame;
            valid = true;
        }
        k_mutex_unlock(&latest_lock);

        if (valid)
        {
            char line[128];
            format_can_frame(line, sizeof(line), &f);
            lv_label_set_text(frame_label, line);
        }

        uint32_t now = k_uptime_get_32();
        if (now - last_ms >= 1000U)
        {
            uint32_t fps = rx_count - last_rx;
            last_rx = rx_count;
            last_ms = now;

            char s[64];
            snprintf(s, sizeof(s), "RX:%u FPS:%u", (unsigned)rx_count, (unsigned)fps);
            lv_label_set_text(stats_label, s);
        }

        lv_timer_handler();
        k_msleep(100);
    }
}

int main(void)
{
    printk("BOOT: app started\n");

    k_mutex_init(&latest_lock);

    const struct device *can_dev = DEVICE_DT_GET(DT_ALIAS(can0));
    if (!device_is_ready(can_dev))
    {
        printk("ERROR: CAN device not ready (DT_ALIAS(can0))\n");
        return 0;
    }

    int err = can_start(can_dev);
    if (err)
    {
        printk("ERROR: can_start failed (%d)\n", err);
        return 0;
    }

    /* Accept all frames (Zephyr 4.3: no CAN_FILTER_DATA) */
    struct can_filter filter = {
        .flags = 0,
        .id = 0,
        .mask = 0,
    };

    int fid = can_add_rx_filter_msgq(can_dev, &can_msgq, &filter);
    if (fid < 0)
    {
        printk("ERROR: can_add_rx_filter_msgq failed (%d)\n", fid);
        return 0;
    }

    printk("CAN started, filter installed id=%d\n", fid);

    /* Start threads */
    k_thread_create(&can_rx_thread, can_rx_stack, CAN_RX_STACK,
                    can_rx_worker, NULL, NULL, NULL,
                    2 /* high prio */, 0, K_NO_WAIT);

    k_thread_create(&ui_thread, ui_stack, UI_STACK,
                    ui_worker, NULL, NULL, NULL,
                    7 /* low prio */, 0, K_NO_WAIT);

    /* main can idle */
    while (1)
    {
        k_sleep(K_SECONDS(5));
    }

    return 0;
}