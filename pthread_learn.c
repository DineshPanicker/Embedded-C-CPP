#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void myturn() {
    for (int i = 0; i < 8; i++) {
        sleep(1);
        printf("My turn %d\n", i);
    }
}

void yourturn() {
    for (int i = 0; i < 3; i++) {
        sleep(2);
        printf("Your turn %d\n", i);
    }
}

int main()
{
    pthread_t newthread;
    
}