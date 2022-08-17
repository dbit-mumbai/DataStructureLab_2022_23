/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// dhaneshwari tendle 
//Q5.c program to find the largest element in an array
#include <stdio.h>

int main() {
  int l[100],i,j, n;
  printf("enter n elements to find the largest\n");
  scanf("%d",&n);
  
      for(i=0;i<n;i++)
          {
          printf("enter the elements of the array %d :", i);
          scanf("%d",&l[i]);
          }
      for(i=1;i<n;i++)
          {
                    if(l[0]<l[i])
                  {
                      l[0]=l[i];
                  }
          } 
      printf("the largest number is %d", l[0]);
  
    return 0;
}
