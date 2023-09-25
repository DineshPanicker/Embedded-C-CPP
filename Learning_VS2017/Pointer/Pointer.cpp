// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;
	int x = 10;
	
	int *ptr = &x; //* is dereference variable
	cout << x;
	*ptr = 5;
	cout << "\n" << x << "\n";
	int y = *ptr;
	cout << y << "\n";
	int *ptr1 = nullptr; //reading/writing from null ptr throws read/write access violation
	//cout << *ptr1 << "\n";
	//*ptr1 = 9;
	//NULL is a macro
	return 0;

}

