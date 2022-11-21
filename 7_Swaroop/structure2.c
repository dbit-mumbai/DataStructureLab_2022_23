//Author: Swaroop Bhagwat   Branch: IT  Roll no.: 7
//Write a C program to store roll no, name , percentage of 5 students using array of structure and display the records in decending order of percentage.
#include <stdio.h>

struct student //defining structure
{
    int rn;
    char name[20];
    float p;
};

int main()
{
    struct student s[5], temp;
    int i, j;//declaration
    //Taking input from user
    printf("\n*Enter details separated by space*\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d :", i+1);
        printf("\nStudent's roll number, name and percentage : ");
        scanf("%d %s %f", &s[i].rn, &s[i].name, &s[i].p);
    }

    for ( i = 0; i < 4; i++) //loop for sorting
    {
        for ( j = i+1; j < 5; j++) //this loop compares the percentage of students
        {
            if (s[j].p> s[i].p) //sorts in ascending order of roll no.
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
            
        }
        
    }

    printf("\n**********************\nStudent details are :\n**********************\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Roll no: %d\t Name: %s\t Percentage: %.2f\n", s[i].rn, s[i].name, s[i].p );
    }   
}
    