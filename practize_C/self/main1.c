#include<stdio.h>
#include<string.h>

int main()
{
	char haystack[]="This is the way";
	char needle[]="the";
	
	char *the = strstr(haystack,needle);

	printf("the: %s\n",the);
	
	char now[]="now";


	return 0;
}
