// Author: Prasad Anil Alai
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
	
	//Taking Data Input from user
	for(i = 0; i < 5; i++)
	{
		printf("Enter Student%d Roll Number, Name and Percentage : ", i+1);
		scanf("%d%s%f", &s[i].roll_no,s[i].name,&s[i].percentage);
	}
	
	// Sorting data in increasing order of Roll Numbers
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(s[j].roll_no < s[i].roll_no) // sorting condition
			{
				// swap
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	
	
	// displaying sorted data as output
	for(i = 0; i < 5; i++)
	{
		printf("Roll Number : %d\n", s[i].roll_no);
		printf("Name : %s\n", s[i].name);
		printf("Percentage : %f\n", s[i].percentage);
		printf("\n");
	}
	
	return 0;
}

/*

Output :

Enter Student1 Roll Number, Name and Percentage : 1
Anand
70
Enter Student2 Roll Number, Name and Percentage : 2
Nilesh
75
Enter Student3 Roll Number, Name and Percentage : 3
Sheesh
78
Enter Student4 Roll Number, Name and Percentage : 4
Adah
89
Enter Student5 Roll Number, Name and Percentage : 5
Crest
97

Roll Number : 1
Name : Anand
Percentage : 70.000000

Roll Number : 2
Name : Nilesh
Percentage : 75.000000

Roll Number : 3
Name : Sheesh
Percentage : 78.000000

Roll Number : 4
Name : Adah
Percentage : 89.000000

Roll Number : 5
Name : Crest
Percentage : 97.000000

*/