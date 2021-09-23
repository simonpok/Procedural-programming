#include<stdio.h>
int main()
{
float c=0,f=0;
printf("Enter your celsius value: ");
scanf("%f",&c);

//printf("\nNow converting your Celsius data to Fahrenheit");
f=9*c/5+32;
printf("\n\nThe Final converted value into fahrenheit is: %f ",f);

return 0;
}
