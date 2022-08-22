#include<stdio.h>

struct Student
{
	int roll_no;
	char name[50];
	float percentage;
};

int main()
{
	struct Student s[5];
	struct Student temp;
	int i, j;


	for(i = 0; i < 5; i++)
	{
		printf("Enter Student%d Roll Number : ", i+1);
		scanf("%d", &s[i].roll_no);
		printf("Enter Student%d Name : ", i+1);
		scanf("%s", s[i].name);
		printf("Enter Student%d Percentage : ", i+1);
		scanf("%f", &s[i].percentage);
	}


	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(s[j].roll_no < s[i].roll_no)
			{

				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	for(i = 0; i < 5; i++)
	{
		printf("Roll Number : %d\n", s[i].roll_no);
		printf("Name : %s\n", s[i].name);
		printf("Percentage : %f\n", s[i].percentage);
	}

	return 0;
}
