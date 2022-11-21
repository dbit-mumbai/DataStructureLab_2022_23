#include<stdio.h>

// Function to print Pascal's Triangle
int PascalsTriangle(int n) 
{
    int arr[100][100];
    int i, j;

    for (i = 0; i < n; ++i) 
    {
        // Printing spaces
        for (j = 0; j < n - 1 - i; ++j)
        {
            printf(" ");
        }
        
        // Calculating then printing the data of ith
        // Row of Pascal's Trianle
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


/*

Output :

Enter Number of Rows in Pascal's Trianle : 8
       1 
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
 1 6 15 20 15 6 1
1 7 21 35 35 21 7 1

*/