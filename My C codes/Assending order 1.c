#include<stdio.h>
#include<conio.h>
void main()
{
	int size=50.0;
	int a[size];
	int i=0,j=0,temp=0,count=0;

	printf("Enter the numbers: ");
	scanf("%d",&count);
	printf("\n*********************************************************");
	printf("\nEnter your %d number",count);
	for(i=0;i<count;i++)
	
	{
		scanf("%d\n",&a[i]);
	}
	
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++) 
		{
			if(a[i]<a[j])  
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		
		}
			printf("\n Descending order is:");
			printf(" %d",a[i]);
			
	}
	getch();
	
	
	
	
}
