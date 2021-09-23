#include<stdio.h>
int palin(int);
int main()
{
	int n,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=palin(n);
	if(n==a)
	{
		printf("\nThe given number is palindrome");
	}
	else
	{
		printf("\nThe given number is not palindrome");
	}
	return 0;
}
int palin(int x)
{
	int rev=0,rem=0;
	while(x!=0)
	{
   		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	return rev;
}
