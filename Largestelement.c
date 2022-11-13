#include<stdio.h>
int main()
{    int a[100],i,n,tem;
    
    //taking numbers of elements in an aray
    
    printf("enter no of element of array:\n");
    scanf("%d",&n);
    
    //condition for taking elements of an array
    
    for(i=0;i<n;i++)
    {
        printf("enter elements of array:\n");
        scanf("%d",&a[i]);
    }
    
    //storing the firdt element of an array in tem
    
    tem=a[0];
    
    //comparing tem to all other elements of an array
    
    for(i=1;i<n;i++)
    {
        if(tem<a[i])
        {
            
//if the element is larger than tem, storing that element in tem
            
            tem=a[i];
        }
        
        //printing the largest element of an array
        
        }   printf("Largest element of an array is=\t%d",tem);

}