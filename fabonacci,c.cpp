#include<stdio.h>
#include<conio.h>

int main()
{
	 int n, a=0, b=1, x, i;
	 
	 printf("Enter terms: ");
	 scanf("%d", &n);
	
	 printf("First %d Fibonacci terms are: \n", n);
	 for(i=1;i<=n;i++)
	 {
	  printf("%d", a);
	  x = a + b;
	  a = b;
	  b = x;
	 }
	  
	 getch();
}
