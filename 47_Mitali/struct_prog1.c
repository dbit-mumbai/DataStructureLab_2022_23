# DSA-REPORT
/*
Name :Mitali Rananavare
Batch : IT/c
Roll Num : 47
Program : Write a C program to roll_no, name , percentange of 5
students using array of structure and display the records in
descending order of percentange.
*/

#include <stdio.h>
struct student
{
  char name[50];
  int roll;
  float marks;
} s[100];

void bubbleSortDesc(struct student stud_list[], int s);
int main()
{
  int i,n;
  struct student s[100];

  printf(“Enter total of students:\n”);
  scanf(“%d”,&n);

  for(i=0;i<n;i++)
  {
    printf(“\n Enter information of student %d:\n”,i+1);
    printf(“Enter name: “);
    scanf(“%s”, s[i].name);

    printf(“Enter roll number: “);
    scanf(“%d”, &s[i].roll);

    printf(“Enter marks: “);
    scanf(“%f”, &s[i].marks);
  }

    bubbleSortDesc(s, n);

    printf(“Displaying Information:\n”);
    printf(“\tName \t roll_number \t marks\n”);
    for(i=0;i<n;i++)
  {
    printf(“\t%s \t%d \t%.1f \n”,s[i].name,s[i].roll,s[i].marks);
  }

  return 0;
}

void bubbleSortDesc(struct student stud_list[100], int s)
    {
        int i, j;
        struct student temp;

        for (i = 0; i < s – 1; i++)
        {
              for (j = 0; j < (s – 1-i); j++)
            {
                  if (stud_list[j].marks < stud_list[j + 1].marks)
                  {
                          temp = stud_list[j];
                           stud_list[j] = stud_list[j + 1];
                           stud_list[j + 1] = temp;
                    }             
            }
       }
}
