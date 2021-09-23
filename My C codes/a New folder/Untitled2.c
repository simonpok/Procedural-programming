#include <stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter limit: ");
    scanf("%d",&n);
     printf("******************************************************************\nThe fibonacci series are: ");
    
    for(i=1;i<=n;i++)
{ 
    
    printf("%d   ",a);
   
    c=a+b;
    a=b;
    b=c;
}
    return 0;
}
