#include <stdio.h>
int main()
{
  int x,a[100],i,l;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    
    for (i=0;i<x;i++)
    {
      printf("\nEnter element a[%d]:",i);
      scanf("%d",&a[i]);
    }
    l=a[0];
    for (i=0;i<x;i++)
    {
      if(a[i]>l)
      {
        l=a[i];
      }
    }
    printf("the largest element is %d",l);
    return 0;
}
