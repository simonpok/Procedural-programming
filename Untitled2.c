 #include<stdio.h>
 #include<string.h>
 int main()
 {
   char n;

   // take input
   printf("Enter a character: ");
   scanf("%c",&n);
   if(n>=97&&n<=122)
   {
      puts(strupr(n));
   }

   // display output
   /*printf("In Upper Case:\n");
   puts(strupr(n));*/

   return 0;
 }
