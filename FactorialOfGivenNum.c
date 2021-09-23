#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter a number: ",n);
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("\nThe fact of %d is= %d",n,fact);
	
	
	
	
	getch();
}
