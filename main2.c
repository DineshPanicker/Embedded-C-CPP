#include <stdio.h>
#include <stdlib.h>
// #include <mem.h>

int main(int argc, char argv[])
{
    int *arr = malloc(sizeof(int) * 10);
    realloc(arr, sizeof(int) * 15);
    for (int i = 0; i < 15; i++)
    {
        arr[i] = 11;
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}