#include<stdio.h>
int main()
{
	int z,n,a,sum=0,temp;
	printf("Enter a number: ");     //123
	scanf("%d",&n);
	temp=n;
	{
		while(n>0)
		{
			z=n%10;
			a= z*z*z;
			sum=sum+a;
	        n=n/10;
		}
		n=temp;
		if(n==sum)
		{
			printf("It is a armstrong number");
		}
		else
		{
			printf("It is not a armstrong number");
		}
		return 0;
	}

}
