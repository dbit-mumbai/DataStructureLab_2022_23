//Write a C program to find largest element in an array
//Name : Gauri nevase ; Roll_n0=41  ;SE_IT
#include<stdio.h>
int main()
{
    int n, i ;
    double a[100], largest=0;
    printf("Enter no of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter no %d :",i+1);
        scanf("%lf",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("largest = %2lf",largest);
    return 0;
}