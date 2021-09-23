    #include<stdio.h>
	#include<stdlib.h>

	int main()
	{
		int i, lower=0, upper=0;
		char x[35];
		FILE *p;
		p=fopen("abc.txt","r");
		if(p==NULL)
		{
			printf("Error! File couldnot be opened");
			exit(0);
		}

		if(fgets(x,35,p)!=NULL)

		{
			puts(x);
		}
        printf("********************************************");

		for(i=0; x[i]!=0; i++){
        if(x[i]>='A' && x[i]<='Z')
        {
        upper++;
        }
        else if(x[i]>='a' && x[i]<='z')
        {
        lower++;
        }
    }
     printf("\nlowercase letters count: %d",lower);
     printf("\nuppercase letters count: %d",upper);
     printf("\n*************************************************");

		fclose(p);
		return 0;
	}



