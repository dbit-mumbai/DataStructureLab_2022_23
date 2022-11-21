
//WAP to find the largest element in an array

#include <stdio.h>

int main()
 {
  int a[100], n, i, tem;
  
  printf("enter number of elements of array:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
  	printf("enter elements of array:\n");
  	scanf("%d",&a[i]);
  }
  
  tem=a[0];
  
  for(i=0;i<n;i++)
  {
  	if(tem<a[i])
	   {
	  	tem=a[i];
	   }
	     	
  }
  
  printf("Largest element of an array is = %d",tem);
 }
