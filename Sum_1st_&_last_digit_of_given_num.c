#include <stdio.h>

int main()
{
    int n, sum=0, firstDig, lastDig;

    /* Input a number from user */
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &n);

    /* Find last digit to sum */
    lastDig = n % 10;


    /* Copy num to first digit */
    firstDig = n;

    /* Find the first digit by dividing num by 10 until first digit is left */
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDig = n;


    /* Find sum of first and last digit*/
    sum = firstDig + lastDig;

    printf("Sum of first and last digit = %d", sum);

    return 0;
}
