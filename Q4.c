#include<stdio.h>

int main()
{
	int rollno[10], i, j, marks[10], temp;

	for(i=0,i<10;i++)
	{
		printf("\nEnter roll no of student:");
		scanf("%d",&rollno[i]);
		printf("\nEnter mark of student:");
		scanf("%d",&mark[i]);
	}
	for(i=0,i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
		if(marks[i]<marks[j])
		{
			temp=marks[i];
			marks[i]=marks[j];
			marks[j]=temp;
		}
		}
	}
	printf("roll no and marks in descending order are:");
	for(i=0;i<10;i++)
	{
		printf("roll no: %d marks: %d\n", marks[i]);
	}
}