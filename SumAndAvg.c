#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,n;
	float avg=0;
	printf("Enter 10 Numbers: ");
	for(i=1;i<=10;i++)
	{
		printf("\nEnter Num%d-",i);
		scanf("%d",&n);
	    sum=sum+n;
	}
	avg=sum/10.0;
	printf("\nThe sum of 10 number is = %d\nThe avg of 10 number is = %f ",sum,avg);
	
	
	
	
	
	getch();
}
