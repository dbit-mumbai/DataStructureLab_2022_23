/* Q2. WAP to generate a Pascal"s Triangle using arrays. 
   Author: Sraina   Roll Number: 43     Batch: C */


#include<stdio.h>

//Function to print Pascal's Triangle

int PascalsTriangle(int n) 
{
    int arr[100][100];
    int i, j;

    //For loop tp print spaces 

    for (i = 0; i < n; ++i) 
    {
        for (j = 0; j < n-1 - i; ++j) 
        {
            printf(" ");
        }
        
        //Printing Pascals Triangle

        for (j = 0; j <= i; ++j) 
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter Number of Rows in Pascal's Trianle : ");
    scanf("%d", &n);
    PascalsTriangle(n);
    return 0;
}