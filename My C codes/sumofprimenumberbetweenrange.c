//WAP to find the sum of prime numbers between two numbers entered by the user.

#include<stdio.h>

int main(){

    int flag,i,num,sum=0,a=0,b=0;
    printf("Enter frist num: ");
    scanf("%d",&a);
    printf("Enter second num: ");
    scanf("%d",&b);

    for(num>=a;num<=b;++num)

{

   flag=0;

    for(i=2;i<=num/2;i++)
	{

        if((num % i) == 0)
		{

        flag++;

        break;

        }
    }

   if(flag==0)

   sum += num;

   }

   printf("\n  Sum of prime numbers is:   %d ",sum);

   return 0;

}
