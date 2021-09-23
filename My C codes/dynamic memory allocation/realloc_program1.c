#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char *p;
	p=(int *)malloc(10);
	strcpy(p,"simon");
	printf("string= %s",p);
	
		p=(int *)realloc(p,12);
		strcat(p," pokhrel");
		printf("\nstring= %s",p);
	
	free(p);
	return 0;
	
}
