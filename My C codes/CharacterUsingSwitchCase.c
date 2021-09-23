#include <stdio.h>
#include<conio.h>
int main()
{
int add,sub,mul,div,a,b;
char choice;

printf("\n\n\n\n\n\n\t\t\t\t\t\t\t M.E.N.U");
printf("\n\t\t\t\t\t\t ************************");
printf("\n\n\t\t\t\t\t\t\t a) ADD");
printf("\n\t\t\t\t\t\t\t b) SUB");
printf("\n\t\t\t\t\t\t\t c) MUL");
printf("\n\t\t\t\t\t\t\t D) Div");

	printf("\n\n\t\t\t\t\t\tEnter Your Two Number= ");
	scanf("%d%d",&a,&b);
	printf("\n\t\t\t\t\t\tEnter Your choice= ");
	scanf("%s",&choice);
	
	switch(choice)
	{
		case 'a':
		{
			add=a+b;
			printf("\n\t\t\t\t\t\tYour Answer for Choice 'a' is: %d",add);
			break;
		}
			
		case 'b':
		{
			
			sub=a-b;
			printf("\n\t\t\t\t\t\tYour Answer for Choice 'b' is: %d",sub);
			break;
		}
			
		case 'c':
		{
				
			mul=a*b;
			printf("\n\t\t\t\t\t\tYour Answer for choice 'c' is: %d",mul);
			break;
	    }
		case 'd':
		{		
			div=a/b;
			printf("\n\t\t\t\t\t\tYour Answer for choice 'd' is: %d",div);
			break;
	    }
	    default:
	    	printf("\n\t\t\t\t\t\t!!! INPUT NOT AVAILABLE !!!");
	}
	
	
	
return 0;
}

