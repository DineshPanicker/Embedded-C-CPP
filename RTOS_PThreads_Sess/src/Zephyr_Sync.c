#include <zephyr.h>
#include <sys/printk.h>

#define STACK_SIZE 1024
#define PRIORITY 7

K_THREAD_STACK_DEFINE(thread_sync1_stack, STACK_SIZE);
K_THREAD_STACK_DEFINE(thread_sync2_stack, STACK_SIZE);
struct k_thread thread_sync1_data;
struct k_thread thread_sync2_data;

int sharedCounter = 0;
struct k_mutex my_mutex;

void incrementCounter(void *arg1, void *arg2, void *arg3) {
    for (int i = 0; i < 100000; i++) {
        k_mutex_lock(&my_mutex, K_FOREVER);
        sharedCounter++;
        k_mutex_unlock(&my_mutex);
    }
}

void main(void) {
    k_mutex_init(&my_mutex);

    k_tid_t thread1_tid = k_thread_create(&thread_sync1_data, thread_sync1_stack, STACK_SIZE,
                                          incrementCounter, NULL, NULL, NULL,
                                          PRIORITY, 0, K_NO_WAIT);

    k_tid_t thread2_tid = k_thread_create(&thread_sync2_data, thread_sync2_stack, STACK_SIZE,
                                          incrementCounter, NULL, NULL, NULL,
                                          PRIORITY, 0, K_NO_WAIT);

    k_thread_join(thread1_tid, K_FOREVER);
    k_thread_join(thread2_tid, K_FOREVER);

    printk("Final counter value: %d\n", sharedCounter);
}
