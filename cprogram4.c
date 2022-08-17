/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 // dhaneshwari tendle 
//Q4.c 
#include <stdio.h>   
struct student
{
    int rollno;
    float per;
    char name[15];
};
int main()
{
    struct student s[5], temp;
    int i,j;
    for(i=0;i<5;i++)    //input of students rolll no. and percentage
    {
        printf("\nenter roll number and percentage and name of student %d respectively", i+1);
        scanf("%d %f %s", &s[i].rollno, &s[i].per,&s[i].name);
    }
    for (i=1;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (s[j].per<s[j+1].per)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("\nsorted list=\n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        
        printf("\nstudent rollnumber=%d", s[i].rollno);
         printf("\nstudent percentage=%f", s[i].per);
         printf("\nstudent name=%s", s[i].name);
    }
}