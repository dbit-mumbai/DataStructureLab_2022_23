// C program to generate pascal triangle 
#include <stdio.h>

int main()
{
    int a[50][50]; // 2 dimensional array
    int i,j,n;     // declaration

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - 1 - i; ++j)
            printf(" ");

        for (j = 0; j <= i; ++j) 
        {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}