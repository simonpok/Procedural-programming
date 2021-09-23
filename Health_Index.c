#include<stdio.h>

int main()
{
   int n;
   repeat:
   printf("\nEnter air quality index: ");
   scanf("%d",&n);
   if(n==0 || n<0)
   {
      printf("Error!! Try again");
      goto repeat;
   }

   else if (n<=3)
   {
      printf("Health Risk is LOW");
   }
   else if(n>=4 && n<=6)
   {
      printf("Health Risk is MODERATE");
   }
   else if(n>=7 && n<=10)
   {
      printf("Health Risk is HIGH");
   }
   else
   {
      printf("Health Risk is VERY HIGH");
   }

   return 0;

}
