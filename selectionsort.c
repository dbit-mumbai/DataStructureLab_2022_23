#include<stdio.h>
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}
void selectionsort(int a[],int l)
{  
   for(int i=0;i<l-1;i++)
   {
    int min=i;
    for(int j=i+1;j<l;j++)
    {
        if(a[min]>a[j])
            {
                min=j;
            }
    }
    swap(&a[i],&a[min]);
   }
}
void display( int a[],int l)
{
   // int a[],l;
    for(int i=0;i<l;i++)
        printf("%d\t",a[i]);}

void main()
{
    int l=3;
    int a[]={0,6,3};
display(a,l);
  selectionsort(a,l);
    display(a,l);
    
}