#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp
{
	char name[30], dep[15];
	int id, salary;

	
};
 int main()
 {
 	struct emp z[50],temp;
 	int i=0,j=0,n;
 	char a[]="computer";
 	printf("Enter Number of Employee: ",n);
    scanf("%d",&n);
 	printf("\n Enter Employee Data:-\n");
 	for(i=0;i<n;i++)
 	{
 		fflush(stdin);
 		printf("\nEnter name of Employee no. %d : ",i+1);
 		gets(z[i].name);
 		//fflush(stdin);
 		printf("Enter ID of Employee no. %d : ",i+1);
 	   	scanf("%d", &z[i].id);
 	   	//fflush(stdin);
 	   	printf("Enter Salary of Employee no. %d : ",i+1);
 	   	scanf("%d", &z[i].salary);
 	   	//fflush(stdin);
 	   	printf("Enter Department of Employee no. %d : ",i+1);
 		scanf("%s", &z[i].dep);
		//fflush(stdin);  
		printf("*********************************************************************\n");	
	}
	
	for(i=0;i<n;i++) 
	{
		for(j=i+1;j<n;j++) 
		{
			if(z[i].salary<z[j].salary)
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}

	printf("\nThe record of Employee with highest salary is: ");
    printf("\n Name:");
	puts(z[0].name);
	printf("\n ID= %d",z[0].id);
	printf("\n salary= %d",z[0].salary);
	printf("\n Department:");
	puts(z[0].dep);
	
	printf("\nThe record of Employee with lowest salary is: ");
    printf("\nName: ");
	puts(z[n-1].name);
	printf("\nID= %d",z[n-1].id);
	printf("\nsalary= %d",z[n-1].salary);
	printf("\nDepartment: \n");
	puts(z[n-1].dep);
	
    printf("\n The details of peoples in computer departent are: \n");
	
	for(i=0;i<n;i++) 
	{
		if(strcmp(z[i].dep,a)==0)
	        {
	            printf("\n Name:");
	            puts(z[i].name);
	            printf("\n ID= %d",z[i].id);
	            printf("\n salary= %d",z[i].salary);
	            printf("\n Department:");
	            puts(z[i].dep);
		    }
	}
	
	return 0;
 }
