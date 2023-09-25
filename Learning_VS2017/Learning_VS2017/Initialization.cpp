#include<string>

int main()
{
	//In this program, I'm learning about uniform initialization
	int a1;//uninitialized
	int a2 = 0; //Copy initialization
	int a3(5); //Direct Initialization

	std::string s1;
	std::string s2("C++");

	char d1[8];	//uninitialized
	char d2[8] = { '\0' };
	char d3[8] = { 'a','b','c','d' };//Aggregate initialization
	char d4[8] = { "abcd" };


	int b1{}; //initilized to its default value which is 0 -> value iniitialization
	int b2{ 5 }; //direct initialization
	//int b3(); //most vexing parse for more details: https://stackoverflow.com/questions/14077608/what-is-the-purpose-of-the-most-vexing-parse

	int b4 = 0;//avoided mostly

	char e1[8]{};
	char e2[8]{ "step" };

	int *p1 = new int{};

	char *p2 = new char[8]{};
	char *p3 = new char[8]{"Hello"};

	//float f{};
	//int i{ f }; //narrowing conversion. It raises error like: Severity	Code	Description	Project	File	Line	Suppression State
	//Error	C2397	conversion from 'float' to 'int' requires a narrowing conversion	Learning_VS2017	c : \users\dines\source\repos\dineshpanicker\c - cpp\learning_vs2017\learning_vs2017\initialization.cpp	34



	return 0;
}

/*
1. Value initialization => T obj{};
2. Direct initialization => T obj{v};
3. Copy initialization => T obj = v;(pls avoid this for user defined objects)

*/

/*
Uniform initialization advantages:
1. It forces initialization
2. You can use direct initialization for array types
3. It prevents narrowing conversions
4. uniform syntax for all types
*/