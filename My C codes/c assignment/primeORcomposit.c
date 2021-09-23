#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,count=0,i;
	printf("Enter num:\n ");
	scanf("%d",&n);

    for(i=1;i<=n;i++)
	{
	  rem=n%i;
	  if(rem==0)	
	{
		
	count=count+1;
}
}
if(count==2)
   {
   	printf("\nYes! Its a prime Number");

   }
else
{
	printf("\nNo! It is not a prime Number");
	getch();
	}	
	
	
	
	getch();
}
