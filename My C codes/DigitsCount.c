#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0;
	
	printf("Enter any Number: ");
	scanf("%d",&n);
	
	while(n>0);
	{
		n=n/10;
		count++;
	}
	printf("\nNo of Digits are %d",count);
	getch();
}
