#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void main()
{
	int n, i, j, temp=0, *arr;
	
	printf("\nEnter number of elements: ");
	scanf("%d", &n);
	
	arr = (int *) malloc(n*sizeof(int));  //Dynamic memory allocation of array
	
	printf("\nEnter elements:\n");
	for (i=0;i<n;i++)
		scanf("%d", (arr+i));
		
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
            //printf("\ni = %d and j = %d\n", i, j);

			if (*(arr+j) < *(arr+i))
			{
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
	
	printf("Sorted list:\n");
	for (i=0;i<n;i++)
		printf("%d\n", *(arr + i));
}
	
/*
OUTPUT:


Enter number of elements: 5

Enter elements:
50 30 10 20 40
Sorted list:
10
20
30
40
50

*/
