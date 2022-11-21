#include<stdio.h>

int main()
{
    int roll_no[5], i, j, temp;
    float percentage[5];
    char name[5];
    
    for(i=0;i<5;i++)
    {
        printf("\nEnter the roll no. of student: ");
        scanf("%d",&roll_no[i]);
        printf("\nEnter the name of student: ");
        scanf("%s",&name[i]);
        printf("\nEnter the percentage of student: ");
        scanf("%f",&percentage[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(percentage[i]<percentage[j])
            {
                temp=percentage[i];
                percentage[i]=percentage[j];
                percentage[j]=temp;
            }
        }
    }
    printf("Record in descending order is : ");
    for(i=0;i<5;i++)
    {
        printf("\nRoll no.:%d   name:%c   percentage:%f\n", roll_no[i],name[i],percentage[i]);
    }
}