#include <stdio.h>

int main()
{

    int *ptr = "welcome";

    ptr[1] = 'r';

    printf("%s", *ptr); // welcome

    return 0;
}