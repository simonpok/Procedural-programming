#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=7;i=i+2)
	{
		for(k=i;k<7;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=5;i=i+2){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
