#include<stdio.h>

int main()
{
    int roll_no[10], i, j, temp, marks[10];
    
    for(i=0;i<10;i++)
    {
        printf("\nEnter the roll no. of student: ");
        scanf("%d",&roll_no[i]);
        printf("\nEnter the marks of student: ");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(marks[i]<marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
        }
    }
    printf("Record in descending order of marks  is : ");
    for(i=0;i<10;i++)
    {
        printf("\nRoll no.:%d  marks:%d\n", roll_no[i],marks[i]);
    }
}