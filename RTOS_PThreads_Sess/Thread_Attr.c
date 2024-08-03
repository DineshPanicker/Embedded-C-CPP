#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void* threadFunction(void* arg) {
    printf("Thread is running\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_attr_t attr;
    size_t stackSize = 2 * 1024 * 1024; // 2 MB

    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, stackSize);

    pthread_create(&thread, &attr, threadFunction, NULL);
    pthread_join(thread, NULL);

    pthread_attr_destroy(&attr);

    printf("Thread has finished execution\n");
    return 0;
}
