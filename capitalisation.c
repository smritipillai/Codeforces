/* Here we are capitalising the first letter of the string*/



#include <stdio.h>

int main()
{
	char s[1000];

	//inputting a string
	gets(s);      

	//checking if the first letter of string is a small letter    
	if(s[0]>96) 
	{
	    s[0]=s[0]-32;
	}
	puts(s);
	return 0;
}
