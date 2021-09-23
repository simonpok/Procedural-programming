#include<stdio.h>
//#include<conio.h>
int main()
{
	int matx[3][3], tranx[3][3],i=0,j=0;
	printf("Enter Nine elements for matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",*(matx+i)+j);
		}
	}
	printf("******************************************************\nElements for matx are: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",*(*(matx+i)+j));
		}
		printf("\n");
	}

		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(tranx+i)+j)=*(*(matx+j)+i);
		}
	}
	printf("\n*******************************************************\nNow the elements for transposed matrix 'tranx' are: \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",*(*(tranx+i)+j));
		}
	printf("\n");
	}


	return 0;
}
