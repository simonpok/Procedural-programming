#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i,count,n,*p,sum=0;
	printf("Input how many prime number you want to enter:\t");
	scanf("%d",&n);
	p=(int *) malloc ( n *sizeof(int));
	if (p==NULL)
	{
		printf("Error Input");
		exit(0);
	}
	else
	{
		printf("Enter %d number\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
			count++;
			sum=sum+i;
		}
		
		printf("Sum of you prime number is: s",sum);
		
    }
    free(p);
    return 0;	
}

