//WAP to take character input from user and convert it into upper case if it is in lower case and vice versa.

#include<stdio.h>
#include<string.h>
#include<ctype.h>



int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("The Upper case of this character is ",toupper(ch));
	}
	else if(ch>=97&&ch<=122)
	{
		printf("The lowercase of this character is ",tolower(ch));
	}
	else 
	{
		printf("Error input");
	}
	return 0;
}

