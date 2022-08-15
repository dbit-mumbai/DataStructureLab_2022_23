//Program to store rollno and % of 5 students and arrange % of students in descending order
#include<stdio.h>
struct student{
  char name[30];
  int roll;
  float percentage;
};

int main()
{
    struct student s[5], temp;
    int i,j;
    printf(" STUDENTS DETAILS \n");
 for(i=0;i<5;i++)
 {
    printf("Enter name, roll and percentage of student:\t");
    scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].percentage);
 }

 for(i=0;i<4;i++)
 {
    for(j=i+1;j<5;j++)
  {
        if(s[i].percentage < s[j].percentage)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
  }
}
    printf("Sorted records are:\n");
    for(i=0;i<5;i++)
 {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Percentage: %0.2f\n\n", s[i].percentage);
 }
 return 0;
}
