//Bubble Sort
#include<stdio.h>
# include <stdlib.h>
//# include <conio.h>
void main(){

  int n,temp,i,j,a[20];
// clrscr();
  printf("Enter total numbers of elements: ");
  scanf("%d",&n);

  printf("Enter %d elements: ",n);
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);

  bubblesort(a,n);
  printf("\n After sorting: ");
  for(i=0;i<n;i++)
      printf(" %d",a[i]);

//getch();
}

 bubblesort(int *a,int s)
{
	int i,j,k,temp;
//Bubble sorting algorithm
      for(i=s-2;i>=0;i--)
	  {
			for(j=0 ;  j<=i  ;j++)
				{
					if(a[j]>a[j+1])
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
			      }
				  printf("\n pass %d  :",s-i-1);
			     for(k=0;k<s;k++)
					printf("%d ",a[k]);

	   }
}