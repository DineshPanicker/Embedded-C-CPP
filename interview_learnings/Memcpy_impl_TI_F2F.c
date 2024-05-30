// A C implementation of memcpy()
#include <stdio.h>
#include <string.h>

void myMemCpy(void *dest, void *src, size_t n)
{
    // Typecast src and dest addresses to (char *)
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    // Copy contents of src[] to dest[]
    for (int i = 0; i < n; i++)
        cdest[i] = csrc[i];
}

// Driver program
int main()
{
    char csrc[] = "Dinesh";
    char cdest[100];
    myMemCpy(cdest, csrc, strlen(csrc) + 1);
    printf("Copied string is %s", cdest);

    return 0;
}
