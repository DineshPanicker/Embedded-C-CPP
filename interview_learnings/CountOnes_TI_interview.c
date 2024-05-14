#include <stdio.h>

int CountOnes(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    return count;
}

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ones = CountOnes(arr, size);
    printf("Number of ones are %d", ones);
    return 0;
}