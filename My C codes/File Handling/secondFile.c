#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   fp=fopen("hawa.txt","w+");
   printf("Input line and press EOF");

   while ((ch=getchar())!=EOF)
   {
        putc(ch, fp);
   }
        fclose(fp);
   printf("Output");
   fp=fopen("hawa.txt","r");
   while((ch=getc(fp))!=EOF)
   {
      printf("%c",ch);
   }
      fclose(fp);
      return 0;

}
