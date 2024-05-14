#include <stdio.h>
#include <stdint.h>

uint32_t SetBits(uint32_t Data, uint8_t bitno)
{
    Data |= 1 << bitno;
    return Data;
}
uint32_t ReSetBits(uint32_t Data, uint8_t bitno)
{
    Data &= ~(1 << bitno);
    return Data;
}
int main()
{
    uint32_t input = 7, output1 = SetBits(input, 3), output2 = ReSetBits(input, 2);
    printf("Input = 0x%x \nOutput1 = 0x%x \nOutput2 = 0x%x", input, output1, output2);
    return 0;
}