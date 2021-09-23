#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *p,*q;
	int x;
	//clrscr();
	p=fopen("C:\\avengers.txt","a+");
	if(p==NULL)
	{
		printf("\n The File couldnot be opened");
		exit(0);
	}
	printf("\n Enter value of x");
	scanf("%d",&x);  //These 2 lines ask value from the user and store it in variable 'x'.
	fprintf(p,"%d",x);  //This line of code will write content of variable x to the file avengers.txt.
	fclose(p);
	return 0;
}
