#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2];
	int *p,sum=0;
	p= &a;
	int i,j;
	for(i=0;i<2;i++)
	    {
	    	for(j=1;j<3;j++)
	    	{
	    	printf("%d",(*(p+i)+j));
			
			}
		printf("\n");
       }
       printf("\n\n");
       for(i=0;i<2;i++)
	    {
	    	for(j=0;j<2;j++)
	    	{
	    	printf("%d",(*(p+i)+j));
			
			}
		printf("\n");
       }
	   
	   
       
    return 0;
}
