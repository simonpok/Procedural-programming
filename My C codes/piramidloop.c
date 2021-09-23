#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,k=0;
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k<1;k--)
		{
			printf(" ");
		}
		
		
			for(j=5;j>=i;j--)
			{
				printf("%d ",i);
			}
			printf("\n");
		}
		getch();
	}

//    1
