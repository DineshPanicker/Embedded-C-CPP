#include <stdio.h>
#include <stdint.h>

void Swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 9, b = 2;
    Swap(&a, &b);
    printf("a= %d,b= %d", a, b);
    return 0;
}