#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	{
		printf("Enter any for number= ");
		scanf("%d%d%d%d",&a,&b,&c,&d);
	}

if (a>b&&a>c&&a>d)

{
	printf("%d is the greatest among all",a);
}
else if (b>a&&b>c&&b>d)
   {
   	printf("%d is the greatest among all",b);
   }
else if (c>a&&c>b&&c>d)
{
 printf("%d is the greatest among all",c);	
}
else
   {
   	printf("%d is the greatest among all",d);
   }
   getch();
}


	
