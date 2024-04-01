#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

static void *
thread_fn_callback(void *arg)
{

    char *input = (char *)arg;

    while (1)
    {
        printf("input string = %s\n", input);
        sleep(1);
    }
}
void thread1_create()
{
    pthread_t pthread1;
    static char *thread_input = "I am thread 1";
    int rc = pthread_create(&pthread1,
                            NULL,
                            thread_fn_callback,
                            (void *)thread_input);
    if (rc != 0)
    {
        printf("Error Occured, thread could not be created, Errno: %d\n", rc);
        exit(0);
    }
}
int main(int argc, char **argv)
{
    thread1_create();
    printf("main function is paused\n");
    pause();
    return 0;
}