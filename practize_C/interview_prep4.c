#include <stdio.h>
#include <stdint.h>

struct StatusofLEDS
{
    int Ld1 : 1;
    int Ld2 : 1;
    int Ld3 : 1;
    int Ld4 : 1;
    int Ld5 : 1;
    int Ld6 : 1;
    int Ld7 : 1;
    int Ld8 : 1;
};

int main()
{
    struct StatusofLEDS status1;
    printf("Sizeof =%ld", sizeof(status1));
    return 0;
}