//Program to find largest element in array
#include <stdio.h>
int main()
{
    int a[100],i,n,largest; //declaration
    
    printf("Enter size of the array : ");
    scanf("%d",&n);        //taking input
  
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
  
    largest=a[0];
    for(i=1; i<n; i++)
    {
        if(largest<a[i])
            largest=a[i];       
    }     
    printf("\n Largest element of array is : %d ",largest);
    return 0;
}