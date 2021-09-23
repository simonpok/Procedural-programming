#include <stdio.h>
#include <conio.h>
void main()
{
	int p,t,r,n,CI,SI,choice;
     printf("\n\n\n\n\n\t\t\t\t\t\t\t M.E.N.U");
     printf("\n\n\t\t\t\t\t\t\t 1. SI");
     printf("\n\t\t\t\t\t\t\t 2. CI");
     printf("\n\n\t\t\t\t\t\t\tEnter your choice: ");
     scanf("%d",&choice);
     printf("\n\n\t\t\t\t\t\t\t Enter Principle, Time and Rate respectively");
     scanf("%d%d%d",&p,&t,&r);
     	
     	switch(choice)
    {
    	case 1:
    		
    		
    		SI= (p*t*r)/100;
    		printf("\n\t\t\t\t\t\t\tYour SI is= %d",SI);
    		break;
    		
    	case 2:
		    
			CI= p*pow((1-r/100),t);
			printf("\n\t\t\t\t\t\t\tYour CI is= %d",CI);
			break;	
    		 
    	
		 
	}
	getch();
}
