//WAP to read Name, roll_no and percentage of 5 students using array of structures. Display the records in descending order of Percentage.
//Name : Gauri nevase ; Roll_n0=41  ;SE_IT
#include<stdio.h>
struct student
{
    char Name[100];
    float percentage;
    int roll_no;

};
int main()
{
    struct student s[5];
    struct student temp;
    int i,j;
    
    for(i=0;i<5;i++)
    {
        printf("Enter name roll no and percentage=");
        scanf("%s %d %f",s[i].Name,&s[i].roll_no,&s[i].percentage);

    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(s[j].percentage<s[j+1].percentage)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("Sorted list=");
    for(i=0;i<5;i++)
    {
        printf("Name=%s\n",s[i].Name);
        printf("roll_no=%d\n",s[i].roll_no);
        printf("percentage=%f\n",s[i].percentage);
    }
    return 0;
}