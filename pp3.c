#include<stdio.h>

int main()
{
    int a[100],b[100],i,j,n;
    
    printf("Enter the number of elements to be entered in array : ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }    
    for (i=0; i<n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&b[i]);
    }
    for (i=0;i<n;i++)
    {if(a[i] == b[i])
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    
    return 0;
}