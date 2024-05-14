#include <stdio.h>

int SumofElements(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumofElements(A, size);
    printf("total sum elements are %d", total);
    return 0;
}