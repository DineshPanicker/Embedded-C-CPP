#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[])
{
    fork();
    printf("Hello, World!\n");
    return 0;
}