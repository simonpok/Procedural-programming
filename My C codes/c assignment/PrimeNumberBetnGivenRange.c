#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, end, isPrime; 

  
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("\nAll prime numbers between 1 to %d are:\n", end);

  
    for(i=2; i<=end; i++)
    {
    
        isPrime = 1; 

        for(j=2; j<=i/2; j++)
        {
            
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

       
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

   getch();
}
