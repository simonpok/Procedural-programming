#include <stdio.h>
int main()
{
  int n, z, sum=0,temp;

  printf("Enter a number\n");
  scanf("%d", &n); 
  temp=n;              

  while (n>0)
  {
     z= n%10;
	 sum=sum*10+z;   
	 n=n/10;          
  }
  n=temp;
 if(n==sum)
   {
   	printf("it is palindrome");

   } 
   else
   {
   	printf("Its not a palindome");
   }

  return 0;
}
