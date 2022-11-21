#include<stdio.h>
int main()
{
    int a[5],i,max=0,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
           {
            max=a[i];
           }
    }

    printf("Largest number in the array = %d",max);


}