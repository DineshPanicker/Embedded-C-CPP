#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
    unsigned int mask = (1 << n) - 1; // Create a mask with n bits set to 1
    mask = mask << (p - n + 1);       // Shift the mask to the correct position

    unsigned int y_masked = (y & mask);         // Extract the rightmost n bits of y
    unsigned int x_cleared = x & ~mask;         // Clear the bits in x that will be replaced
    unsigned int result = x_cleared | y_masked; // Combine x and y

    return result;
}

int main()
{
    unsigned int x = 0xda; // Example value for x 0b11011010
    unsigned int y = 0x35; // Example value for y 0b00110101
    int p = 5;             // Example position p
    int n = 3;             // Example number of bits n 0011

    unsigned int result = setbits(x, p, n, y);

    printf("Result: 0x%x\n", result);

    return 0;
}