#include <stdio.h>
struct student 
{ 
    int roll_no;
    char name [30];
    float percent;
};
int main()
{   int s;
    struct student s[5];
    int i , j, temp;
    for (i=0; i<5 ; i++)
    { 
        printf("Enter roll no , name and your percentage");
        scanf("%d %s %f" , &s[i].roll_no , &s[i].name , &s[i].percent);
    }
     for (i=1; i<5; i++)
     {
         for (j=0; j<5-i ; j++)
         { 
             if s[j].percent > s[j+1].percent)
             {
                 temp = s[j];
                 s[j] = s[j+1];
                 s[j+1] = temp;
             }
     }
     }
     printf("Sorted list ");
     for (i=0; i<5 ; i++)
     { 
         printf("Name %s" , s[i].name);
         printf("Roll no %d" , s[i].roll_no);
         printf("Percentage %f" , s[i].percentage);
     }
    return 0;
}
