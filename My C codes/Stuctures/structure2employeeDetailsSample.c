#include<stdio.h>
#include<string.h>

struct emp
{
	char name[25];
	int id;
	int salary;
};


int main()
{
	struct emp s[10],temp;
	int i=0,j=0,n;
	printf("Enter number of employees: ");
	scanf("%d",&n);
	printf("\n Enter data:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter name of %d person",i+1);
		scanf("%d", &s[i].name);
		fflush(stdin);
		printf("Enter id of %d person",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("Enter salary of %d person",i+1);
		scanf("%d",&s[i].salary);
		fflush(stdin);
		printf("------------------------------------------------------------------");
		
		
	}
    
	return 0;
}
