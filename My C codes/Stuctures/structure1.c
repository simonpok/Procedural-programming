// Write a program, using structure to input records of 100 students and display the record of student with the highest marks. The structure members 
//include: student's name, roll, and percentage marks.

#include<stdio.h>
#include<conio.h>

struct stu

{
 char name[30];
 int roll;
 float per;	
};

int main()
{
	struct stu z[10],temp;
	int i=0,j=0;
	printf("\n Enter data: ");
	for(i=0;i<10;i++)
	{
		printf("\n\nEnter name of %d person: ",i+1);
		scanf("%s" ,&z[i].name);
		printf("Enter roll of %d person: ",i+1);
		scanf("%d",&z[i].roll);
		printf("Enter percentage of %d person: ",i+1);
		scanf("%f",&z[i].per);
	}
	for(i=0;i<10;i++) 
	{
		for(j=i+1;j<10;j++) 
		{
			if(z[i].per<z[j].per)
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}

	printf("\nThe record of student with the highest marks is: ");
	printf("\n Name:");
	puts(z[0].name);
	printf("\n roll no= %d",z[0].roll);
	printf("\n percentage= %f",z[0].per);
	return 0;
}
