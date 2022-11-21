//Write a C program to generate Pascal Triangle using array
//Name : Gauri nevase ; Roll_n0=41  ;SE_IT
#include<stdio.h>
void PascalsTriangle(int n)
{
    int array[n][n];
    int line , i;
    for(line=0; line<n ; line++)
    {
        for(i=0;i<=line;i++)
        {
            if (i==0 || i==line)
                array[line][i]=1;
            else
                array[line][i]=array[line-1][i-1]+array[line-1][i];
            printf("%d ",array[line][i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
        PascalsTriangle(n);
    return 0;

}