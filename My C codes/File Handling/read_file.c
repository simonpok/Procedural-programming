#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    int x;
	p=fopen("abc.txt","r");
	if(p==NULL)
	{
		printf("\n Error! File couldn't be opened");
		exit(0);
	}

	while(fscanf(p,"%d",&x)!=EOF)
	{
	 printf("%d\t",x);
	}





fclose(p);
return 0;
}
