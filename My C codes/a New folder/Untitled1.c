#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,cnt=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++);
    {
        if(n%i==0)
        {
           cnt++;
        }
    }
    if(cnt==2)
    {
    	printf("prime");
	}
	else 
	{
		printf("not a prime");
	}

	
    return 0;
}
