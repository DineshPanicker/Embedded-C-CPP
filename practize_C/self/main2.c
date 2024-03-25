#include <stdio.h>

int main()
{
	int m = 4, n = 11, a = 0xdeadbeef, x = 0xbc; // assume n>m
	// expected output: 0xdeadbbcf
	printf("The previous value of a is: %x\n", a);
	int mask1, mask2, new_mask, value_to_be_written;

	mask1 = ((1 << m) - 1);		  // 0x0000000f
	mask2 = ((1 << (n + 1)) - 1); // 0x00000fff
	new_mask = (mask1) ^ (mask2);
	value_to_be_written = (x << m) & new_mask; // 0x00000ab0

	int new_a = (a & (~new_mask) | value_to_be_written);

	printf("The new a is: %x\n", new_a);
	return 0;
}
