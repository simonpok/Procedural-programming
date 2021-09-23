//WAP to find greatest among 10 numbers using array by passing it in a function.

//(with return,with parameter)

#include<stdio.h>
//#include<conio.h>

int greatest(int x[]);  // Function Declaration

int main()
{

	int result;
	int a[10];
	int i=0;

    printf("\n Enter ten numbers \n");
	for(i=0;i<=9;i++)
	{

		scanf("%d",&a[i]);
	}
	result=greatest(a);

	printf("\n The greatest among ten num is: %d",result);
	getch();
}

int greatest(int m[])
{

	int greatest, i=0;
	greatest=m[0];
	for(i=0;i<10;i++)
	{
    	if (m[i]>greatest)
		{
    		greatest= m[i];
		}
	}
	return greatest;

}


