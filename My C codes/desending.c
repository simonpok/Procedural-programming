#include<stdio.h>
#include<conio.h>
void main()
{
	
	int size=30;
	int a[size];
	int i=0,j=0,temp=0,count=0;
	clrscr();
	label1:
	printf("Enter how many numbers you want to sort");
	scanf("%d",&count); //10-user wants to enter 10 numbers which will be placed at 0-9 index at array a;
	if(count>size)
	{
		printf("\n sorry! I can accept only 30 numbers! Please try again");
		goto label1;
	}

	for(i=0;i<=count-1;i++)
	{
		scanf("%d",&a[i]);
	}   

	for(i=0;i<=count-1;i++) //1
	{
		for(j=i+1;j<=count-1;j++) //2-9
		{
			if(a[i]<a[j])  
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}

	printf("\n Descending order is:");
	for(i=0;i<=count-1;i++)
	{
		printf(" %d",a[i]);
	}
getch();
}
