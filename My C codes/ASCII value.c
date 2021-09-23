//WAP to print ASCII Value from a to z and A to Z.

#include <stdio.h>
 
int main() 
{ 
   char i,j;
    
	printf("The ASCII value from a to z are:");  
    for(i='a';i<='z';i++)
    {
    	printf("\n%c=%d",i,i);
	}
	printf("\nThe ASCII value from A to Z are:");
	for(j='A';j<='Z';j++)
	{
		printf("\n%c= %d",j,j);
	}
return 0;
}
