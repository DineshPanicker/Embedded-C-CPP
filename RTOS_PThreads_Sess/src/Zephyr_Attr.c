#include <zephyr/zephyr.h>
#include <sys/printk.h>

#define STACK_SIZE 2048
#define PRIORITY 7

K_THREAD_STACK_DEFINE(thread_stack, STACK_SIZE);
struct k_thread thread_data;

void thread_function(void *arg1, void *arg2, void *arg3) {
    printk("Thread is running\n");
}

void main(void) {
    k_tid_t thread_tid = k_thread_create(&thread_data, thread_stack, STACK_SIZE,
                                         thread_function, NULL, NULL, NULL,
                                         PRIORITY, 0, K_NO_WAIT);

    k_thread_join(thread_tid, K_FOREVER);

    printk("Thread has finished execution\n");
}
