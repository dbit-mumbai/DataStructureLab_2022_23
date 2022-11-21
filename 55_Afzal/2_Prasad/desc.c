// Author: Prasad Anil ALai
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
	
	// Sorting data in decreasing order of Roll Numbers
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(s[j].percentage > s[i].percentage) // sorting condition
			{
				// swap
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	1
	
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

Output:

Enter Student1 Roll Number, Name and Percentage : 2
A
90
Enter Student2 Roll Number, Name and Percentage : 4
B
67
Enter Student3 Roll Number, Name and Percentage : 1
M
69
Enter Student4 Roll Number, Name and Percentage : 9
L
99
Enter Student5 Roll Number, Name and Percentage : 12
Y
55
Roll Number : 9
Name : L
Percentage : 99.000000

Roll Number : 2
Name : A
Percentage : 90.000000

Roll Number : 1
Name : M
Percentage : 69.000000

Roll Number : 4
Name : B
Percentage : 67.000000

Roll Number : 12
Name : Y
Percentage : 55.000000

*/