#include<stdio.h>
#include<string.h>

int main()
{
	
	char ptr[] = "abc";
	strcpy(ptr,"def");
	printf("%p",ptr);

	return 0;
}