#include <stdio.h>
struct student
{
	int roll;
	char name[100];
	float percentage;
};

int main()
{
	int i,j;
	struct student s[5],temp;
	
	printf("\nEnter the details of the students.");

	for(i=0;i<5;i++)
	{
		printf("\nEnter roll number of student %d : ",i+1);
		scanf("%d",& s[i].roll);

		printf("\nEnter name of student %d : ",i+1);
		scanf("%s", s[i].name);

		printf("\nEnter prcentage of student %d : ",i+1);
		scanf("%f",& s[i].percentage);
	}

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].roll >= s[j].roll)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nRoll No. : %d ",s[i].roll);
		printf("\nName : %s ",s[i].name);
		printf("\nPercentage : %f \n",s[i].percentage);
	}
}