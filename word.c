#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() 
{
	char a[5000];
	
	//gets a string from the user
	gets(a);
	int p=0,q=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]<='Z')
		
		//incrementing the count for capital letters
		p++;
		else 
		
		//incrementing the count for lower case letters
		q++;
        }
    
        //checking if number of capital letters are more 
	if(p>q)
	{
		for(int i=0;a[i]!='\0';i++)
		printf("%c",toupper(a[i]));    //toupper function coverts lower case letters to capital letters
	}
	else 
	{
        	for(int i=0;a[i]!='\0';i++)
        	printf("%c",tolower(a[i]));   //tolower function converts capital letters to lower case letters
	}    
	return 0;
}
