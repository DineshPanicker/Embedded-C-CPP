#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main()
{
    int *data;

    size_t data_size = sizeof(int) * 1000000000000;
    int iterations = 0;
    while (true)
    {
        data = malloc(data_size); // heap is gonna be full
        if (data == NULL)
            break;
        iterations++;

        printf("iterations: %d\n", iterations);

        sleep(1);
    }
    printf("malloc failed! \n");
    return 0;
}