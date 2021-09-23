#include<stdio.h>
int main()
{
     float x=0;
     printf("Enter you Average marks: ");
     scanf("%f",&x);
     {
        if(x<=39.9)
        {
            printf("Your grade is: F");
        }
        else if(x>=40 && x<=49.9)
        {
            printf("Your grade is: D");
        }
        else if(x>=50 && x<=59)
        {
            printf("Your grade is: C");
        }
        else if(x>=60 && x<=79)
        {
            printf("Your grade is: B");
        }
        else if(x>=80 && x<=100)
        {
            printf("Your Grade is: A");
        }
        else
        {
            printf("Error!! No such type of marks found\nPlease Try again");
        }
      }

return 0;

}

