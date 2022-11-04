#include<stdio.h>

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int ar[],int s,int e)
{
    int i,j;
    int pivot=ar[e];//set pivot as end of the array
     i=s-1;
    
    for(int j=s;j<=e-1;j++)
        {
            if(ar[j]<pivot)
            {
                i++;
                //swap
                swap(ar[j],ar[i]);
            }
            i++;
            swap(ar[i],ar[e]);
        }
    
    return i;//pivot position
}

void quicksort(int ar[],int s, int e)
{
    if(s>=e)
        {return;}
    int pivot=partition(ar,s,e);
    quicksort(ar,s,pivot-1);
    quicksort(ar,pivot+1,e);
    
}

void main()
{
    int l=4;
    int a[]={6,4,2,1};

    quicksort(a,0,l-1);

    for(int i=0;i<l;i++)
        printf("%d\t",a[i]);
}