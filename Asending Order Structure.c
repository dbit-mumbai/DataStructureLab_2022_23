// NAME :- SUMIT SAWANT ROLL NO:- 51
// 	Prog To Print Roll Number In Ascending Order 
#include<stdio.h>
// Created A Structure for Taking Basic input types
struct Details { // Created Variables
	int roll;
	float marks;
	char name[20];
}s1[5],temp;// Declared two variables

int main()
{	
	int i,j;
	// Taking Input
	
	for(i=0;i<5;i++)
	{
		printf("Enter Students %d Roll No: ",i+1);
		scanf("%d",&s1[i].roll);
		printf("Enter Students %d Name: ",i+1);
		scanf("%s",&s1[i].name);
		printf("Enter Students %d Marks: ",i+1);
		scanf("%f",&s1[i].marks);
	}
		
	// Sorting	
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(s1[i].roll>s1[j].roll)
			{	// Swaping
				temp=s1[j];
				s1[j]=s1[i];
				s1[i]=temp;
			}
		}
	}
	printf("*************************************************\n Output:\n");
	printf("Name \tRoll No\tMarks\n");	// Printing Output
	for(i=0;i<5;i++)
	{	// For printing Output in Table Form
		printf("%s\t %d\t %f\n",s1[i].name,s1[i].roll,s1[i].marks);		
	}
}
