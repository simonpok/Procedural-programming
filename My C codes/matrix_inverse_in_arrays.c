#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10],i,j,r,c;
	printf("Enter row and columns for the matrix to be inversed: ");
	scdnf("%d %d",&r,&c);
	printf("Enter the elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nThe transpose of matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",matrix[j][i]);
		}
	printf("\n");
	}
getch();
}
