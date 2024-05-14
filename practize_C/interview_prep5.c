#include <stdio.h>
#include <stdint.h>

int swappedadjbits(int n)
{
    int mask = 0x3;                 // 0b11
                                    // 010010 100001
    for (int i = 0; i < 32; i += 2) // Assumption: n is 32 bit wide
    {
        int temp = (n >> i) & mask;
        if (temp & 0x1 != (temp >> 1) & 0x1)
            temp = temp ^ mask;
        else
            continue;
        n = n & (~(mask << i)); // 111..00 only last bits are 0
        n = n | (temp << i);
    }
    return n;
}
int main()
{
    uint8_t input = 0x41;

    return 0;
}