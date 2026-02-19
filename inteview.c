#include<stdio.h>

#define SQUARE(x) x*x

int main()
{
	int a = 3;
	int result = SQUARE(a+1);
	printf("Result: %d\n",result);
	return 0;
}
