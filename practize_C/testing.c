#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{

    /*
    m = 4, n = 11, a = 0xdeadbeef, x=0xab;
    the o/p should be a=0xdeadbabf
    */
    uint32_t m = 4, n = 11, a = 0xdeadbeef, x = 0xab;
    uint32_t mask1 = ((1 << m) - 1);       // 0x0000000f;
    uint32_t mask2 = ((1 << (n + 1)) - 1); // 0x00000fff

    uint32_t new_mask = (mask1) ^ (mask2); // 0x00000ff0

    uint32_t value_to_be_written = (x << m) & new_mask; // 0x00000ab0

    uint32_t new_a = ((a & (~new_mask)) | value_to_be_written);

    printf("New value of a is :%x\n", new_a);
    return 0;
}