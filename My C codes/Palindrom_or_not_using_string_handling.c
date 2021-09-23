//WAP to check whether a string is palindrome or not (using string handling function).
#include <stdio.h>
#include <string.h>
int main()
{
char a[30], b[30];
printf("Enter a string : ");
gets(a);
strcpy(b,a);
strrev (b);
if (strcmp(a,b)==0)
{
printf("\nIts palindrome");
}
else
{
printf("\nIts not a palindrome");
}
return 0;
}
