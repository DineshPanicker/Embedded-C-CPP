#include <stdio.h>
#include <stdint.h>

uint32_t SwapBytes(uint32_t Data)
{
    uint32_t Output = 0x0;
    uint32_t Temp = 0x0;

    for (int i = 0; i < 4; i++)
    {
        Output = Output << 8;
        Temp = Data >> (8 * i) & 0xFF;
        Output += Temp;
    }
    return Output;
}
int main()
{
    uint32_t input = 0xCC8700FC, output = SwapBytes(input);
    printf("Input = 0x%x \n and Output = 0x%x", input, output);
    return 0;
}