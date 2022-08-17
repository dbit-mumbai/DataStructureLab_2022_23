#include<stdio.h>

struct Student 
{
	int r;
	char name[20];
	float p;
};

int main()
{
	struct Student s[5];
	struct Student temp;
	int i, j; 
	
	//For Taking Input
	for(i = 0; i < 5; i++)
	{
		printf("Enter Student%d Roll Number : ", i+1);
		scanf("%d", &s[i].r);
		printf("Enter Student%d Name : ", i+1);
		scanf("%s", s[i].name);
		printf("Enter Student%d Percentage : ", i+1);
		scanf("%f", &s[i].p);
	}
	
	// Sorting data 
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{// Condition For Swaping 
			if(s[j].p > s[i].p) 
			{
				// swap
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	
	
	//For Printing Output
	printf("------------------------------------------\n");
	for(i = 0; i < 5; i++)
	{
		printf("Roll Number : %d\n", s[i].r);
		printf("Name : %s\n", s[i].name);
		printf("Percentage : %f\n", s[i].p);
		printf("------------------------------------------\n");
	}
	
	return 0;
}
