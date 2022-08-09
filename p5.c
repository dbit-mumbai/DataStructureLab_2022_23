//Author: Dhruuv Naik   Branch: IT  Roll no.: 39
//Write a C program to roll_no, name , percentage of 5 students using array of structure and display the records in descending order of percentage
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
    int i, j, k;//declaration
    //Taking input from user
    printf("\n*Enter details separated by space*\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d :", i+1);
        printf("\nStudent's roll number, name and percentage : ");
        scanf("%d %s %f", &s[i].rn, &s[i].name, &s[i].p);
    }

    