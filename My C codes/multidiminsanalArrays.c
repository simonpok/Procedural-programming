//WAP to print two 4X3 matrix and print sum.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][3],b[4][3],i=0,j=0,sum[4][3];
	
	printf("\nEnter frist matrix the values");
	for(i=0;i<4;i++) 
	{
		for(j=0;j<3;j++) 
		{
			printf("\n Enter [%d][%d] element",i,j);
			scanf("%d",&a[i][j]);
		}
		
		 printf("\n");
		
}
	printf("\nEnter second matrix the values");
	for(i=0;i<4;i++) 
	{
		for(j=0;j<3;j++) 
		{
			printf("\n Enter [%d][%d] element",i,j);
			scanf("%d",&b[i][j]);
		}
		
		 printf("\n");
		
}

  for (i = 0; i < 4; i++)
    for (j = 0; j < 3; j++) 
	  {
      sum[i][j] = a[i][j] + b[i][j];
      printf("\nThe output of a[%d][%d] + b[%d][%d] is :",i,j,i,j);
      printf("%d", sum[i][j]);
    }
    
getch();
}
