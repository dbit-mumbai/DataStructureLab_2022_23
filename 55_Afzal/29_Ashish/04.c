#include<stdio.h>

/* Declaration of structure */
struct student
{
    char name[30];
    int roll;
    float percent ;
};

int main()
{
    /* Declaration of array of structure */
    struct student s[20], temp;
    int i,j;

    printf("Enter the Students details\n\n") ;
    for(i=0; i< 5; i++)
    {
        printf("Enter Name, Roll and Percentage of Student %d:\n", i+1);
        scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].percent );
    }
    for(i=0; i< 4; i++)
    {
        for(j=i+1; j< 5; j++)
        {
            if(s[i].percent<s[j].percent)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\n\nSorted records are:\n");
    for(i=0; i< 5; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Percentage: %0.2f\n\n", s[i].percent);
    }
    return 0;
}