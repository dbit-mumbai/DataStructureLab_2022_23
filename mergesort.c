// Online C compiler to run C program online
#include <stdio.h>


void merge(int a[],int s,int mid,int e)
{
    int i,j,k;
    int b[100];
    
    i=k=s;
    j=mid+1;
    

    while(j<=e && i<=mid)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;k++;
        }
        else
        {
            b[k]=a[j];
            j++;k++;
        }
        
    }
    
    while(i<=mid)
    {
        b[k]=a[i];
        k++;i++;
    }
    
    while(j<=e)
    {
       b[k]=a[j];
        k++;j++;
    }
    for(i=s;i<=e;i++)
    {
        a[i]=b[i];
    }
    
}


void mergesort(int array[],int s,int e)
{
    int mid;
    //condition to check start and end are not equal
    if(s<e)
    {
        mid=(s+e)/2;
        //recursion
        mergesort(array,s,mid);
        mergesort(array,mid+1,e);
      merge(array,s,mid,e);
    }
    
}
void main()
{
    int len=3;
    int a[]={3,2,1};
    
   mergesort(a,0,(len-1));
    for(int i=0;i<len;i++)
      {  printf("%d\t",a[i]);}
}