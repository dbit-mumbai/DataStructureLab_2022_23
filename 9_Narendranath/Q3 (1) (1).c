#include<stdio.h>

int main()
{
    int a[50],b[50],i,j,n,cnt=0;

    //accepting elements
    printf("Enter the number of elements to be entered in arr 1 & 2: ");
    scanf("%d",&n);

    //using loops to store elements

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d of array1: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\n\n");
    for (j = 0; j < n; j++)
    {
        printf("Enter the element %d of array2: ",j+1);
        scanf("%d",&b[j]);
    }
    
    for (i = 0; i < n; i++) 
    {
        if(a[i] == b[i])
        {
            cnt++;
        } 
    } 
    if(cnt==n) 
        printf("\n1");
    else
        printf("\n0");
}