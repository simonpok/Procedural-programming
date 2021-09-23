#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,n;
	printf("Enter the number: ");
	scanf("\n%d",&n);
	
	    for(i=1;i<=n;i++)
	      {
		      sum=sum+(2*i);
	      }
		
		printf("\nThe sum of first n even num is = %d",sum);
	
	
	
	
	
	getch();
}
