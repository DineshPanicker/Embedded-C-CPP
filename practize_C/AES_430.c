#include <stm32f4xx.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#define BLINK_CYCLES 500000L
#define KEYLENGTH 256
#define KEYLENGTH_BYTES (KEYLENGTH / 8)
#define DATABLOCK_BYTES 16

void AES_setKey(bool encrypt, const uint8_t *key)
{
    uint8_t i;
}