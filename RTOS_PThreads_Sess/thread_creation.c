#include <pthread.h>
#include <stdio.h>

void* threadFunction(void* arg) {
    printf("Thread %d is running\n", *(int*)arg);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    int threadArg1 = 1, threadArg2 = 2;

    pthread_create(&thread1, NULL, threadFunction, &threadArg1);
    pthread_create(&thread2, NULL, threadFunction, &threadArg2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Threads have finished execution\n");
    return 0;
}
