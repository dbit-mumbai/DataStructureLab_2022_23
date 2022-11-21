/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : SELECTION SORTING
*/

//To implement selection sorting (Ascending order).

#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i, j, temp=0, *arr;
	
	printf("\nEnter number of elements: ");
	scanf("%d", &n);
	
	arr = (int *) malloc(n*sizeof(int));  //Dynamic memory allocation of array
	
	printf("\nEnter elements:\n");
	for (i=0;i<n;i++)
		scanf("%d", (arr+i));
		
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
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

	getch();
}
	
