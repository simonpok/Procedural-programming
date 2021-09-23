#include<stdio.h>
#include<conio.h>
int main()
{
int a[4];
int *p,j;
p=&a[0];   //or p=a; //pointing



	for(j=0;j<=4;j++)
	{
		scanf("%d",(p+i));
	}


	for(j=0;j<=4;j++)
	{
		printf("%d",*(p+i));
	}

}




In 2-D array, whenever we are using pointer, never use *p.

Use (*p)[columnsize];

scanf= *(p+i)+j;
printf= *(*(p+i)+j);

eg:

int a[4][5];
int (*p)[5],i,j;
p=a; // pointing : dont use p=&a[0][0] in 2-D array case,only p=a will work.

for(i=0;i<=3;i++)
{
	for(j=0;j<=4;j++)
	{
		scanf("%d",*(p+i)+j);
	}
}

for(i=0;i<=3;i++)
{
	for(j=0;j<=4;j++)
	{
		scanf("%d",*(*(p+i)+j));
	}
printf("\n");
}
