#include <zephyr.h>
#include <sys/printk.h>

#define STACK_SIZE 1024
#define PRIORITY 7

K_THREAD_STACK_DEFINE(thread_creation1_stack, STACK_SIZE);
K_THREAD_STACK_DEFINE(thread_creation2_stack, STACK_SIZE);
struct k_thread thread_creation1_data;
struct k_thread thread_creation2_data;

void thread1_function(void *arg1, void *arg2, void *arg3) {
    printk("Thread 1 is running\n");
}

void thread2_function(void *arg1, void *arg2, void *arg3) {
    printk("Thread 2 is running\n");
}

void main(void) {
    k_tid_t thread1_tid = k_thread_create(&thread_creation1_data, thread_creation1_stack, STACK_SIZE,
                                          thread1_function, NULL, NULL, NULL,
                                          PRIORITY, 0, K_NO_WAIT);

    k_tid_t thread2_tid = k_thread_create(&thread_creation2_data, thread_creation2_stack, STACK_SIZE,
                                          thread2_function, NULL, NULL, NULL,
                                          PRIORITY, 0, K_NO_WAIT);

    k_thread_join(thread1_tid, K_FOREVER);
    k_thread_join(thread2_tid, K_FOREVER);

    printk("Threads have finished execution\n");
}
