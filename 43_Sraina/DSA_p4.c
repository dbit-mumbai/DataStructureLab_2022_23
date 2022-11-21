/* Q4. WAP to roll_no, name, percentange of 5 students using array of structure and
   display the records in descending order of percentage.

   Author: Sraina   Roll Number: 43     Batch: C */

#include<stdio.h>
struct student
{
    int roll_no, percentage;
    char name[100];
};

//Declaring a structure

int main()
{
    struct student s1[5], temp;
    int i, j, step;

    //For loop for input

    for(i = 0; i < 5; i++)
    { 
        printf("Enter Name, Roll Number and Percentage: \n");
        scanf("%s %d %d", s1[i].name, &s1[i].roll_no, &s1[i].percentage); 
    }

    //For loop for sorting in descending order

    for(step = 0; step < 4; step++)
    {
        for(i = 0; i < 5-step; i++)
        {
            if(s1[i].percentage < s1[i+1].percentage)
            {
                temp = s1[i];
                s1[i] = s1[i+1];
                s1[i+1] = temp;
            }

        }
    }

    printf("\nSorrted Array: \n");

    //For loop for displaying sorted array

    for(i = 0; i < 5;i++)
    {
        printf("\nRoll Number: %d\n", s1[i].roll_no);
        printf("Name: %s\n", s1[i].name);
        printf("Percentage: %d\n", s1[i].percentage);
        printf("\n");
    }
}