#include <stdio.h>

void func_missing(int arr[], int n)
{
    int i, j, next_num = 1;
    for (i = 0; i < n; i++)
    {
        for (j = next_num; j < arr[i]; j++)
        {
            printf("%d is missing\n", j);
        }
        next_num = arr[i] + 1;
    }
}

int main()
{
    int array[] = {1, 3, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Missing numbers in this array are: \n");
    func_missing(array, size);
    return 0;
}