#include <stdio.h>
#define R 10
#define C 20
int main()
{
    int(*p)[R][C];
    printf("%ld", sizeof(*p)); // 120 Bytes?
    return 0;
}