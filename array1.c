#include <stdio.h>

s
int main()
{
    int student[10][2], i, j;
    
    for ( i = 0; i < 10; i++)
    {   
        printf("\nEnter marks of roll no %d : ", i+1);   
        scanf("%d", &student[i][1]); 
        student[i][0]=i+1;
    }
    
    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (student[i][1]<student[j][1]) 
            {   
                student[i][1] = student[i][1] + student[j][1];
                student[j][1] = student[i][1] - student[j][1];
                student[i][1] = student[i][1] - student[j][1];
                
                student[i][0] = student[i][0] + student[j][0];
                student[j][0] = student[i][0] - student[j][0];
                student[i][0] = student[i][0] - student[j][0];
            }   
        }    
    }
 
    
    printf("\nMarks of students in decreasing order : \n");
    for ( i = 0; i < 10 ; i++)
    {
        printf("Roll no. %d\t", student[i][0]);
        printf("scored %d\n", student[i][1]);
    }
}
