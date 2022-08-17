#include <stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};

int main () {
//define struct....
    struct student s[5];
    
    int i,j,tem;
    char sem[30];
    float fem;
//loop to take input of 5 student
    for(i=0;i<5;i++)
    {
        printf("enter roll:\n");
        scanf("%d",&s[i].roll);
        printf("enter name:\n");
        scanf("%s",&s[i].name);
        printf("enter marks:\n");
        scanf("%f",&s[i].marks);
    }
    printf("**************************************************\n");
//sorting the details in ascending order of roll
   for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
        if(s[i].roll>s[j].roll)
            {
                tem=s[i].roll;
                s[i].roll=s[j].roll;
                s[j].roll=tem;
                
                strcpy(sem,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,sem);
                
                fem=s[i].marks;
                s[i].marks=s[j].marks;
                s[j].marks=fem;
                

            }
        }
    }
//printing details.....
    for(i=0;i<5;i++)
    {
        printf("roll:\t%d\n",s[i].roll);
        printf("name:\t%s\n",s[i].name);
        printf("marks:\t%f\n",s[i].marks);
    }
    
}
