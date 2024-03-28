#include <stdio.h> //entire code a part of text segment
#include <stdlib.h>

void function(int arg1, int arg2) // args are in stack
{
	int x;						// stack (since its local to function)
	static int y;				// uninitialized data segment
	static int z = 1;			// initialized data segment
	int *dm = (int *)malloc(8); // dm* is in stack and malloc part is in heap
	return;
}
int a;			  // uninitialized data segment
static int b;	  // uninitialized data segment
static int c = 0; // initialized data segment
int d = 3;		  // initialized data segment

int main(void)
{
	int p;			  // stack (loacl to main)
	static int q;	  // uninitialized data segment
	static int r = 0; // initialized data segment
	function(2, 3);
	return 0;
}