#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
int main()
{
    int number = 0xFF;
    int d = 0;
    d++;
    unsigned result = getbits(number, 4, d);
    printf("The result of getbits is: %d", result);
    return 0;
}