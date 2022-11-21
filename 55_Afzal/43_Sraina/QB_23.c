//To implement quick sorting (Ascending order).

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 10

int a[MAX], n;

//Function prototypes
void printArray(int a[]);
void swap(int a[], int k, int small);
int partition(int a[], int i, int j);
void quickSort(int a[], int i, int j);

main()
{

	int i ,a[MAX];

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printArray(a);

	quickSort(a, 0, n - 1);

	return(0);
}


//F1: DISPLAY FUNCTION
void printArray(int a[])
{
	int i;

	for (i=0;i < n;i++)
		printf("\n%d", a[i]);
}


//F2: SWAPPING FUNCTION
void swap(int a[], int k, int small)
{
	int temp;

	temp = a[k];
	a[k] = a[small];
	a[small] = temp;
}


//F3: PARTITION FUNCTION
int partition(int a[], int i, int j)
{
	int pivot, small, k;

	pivot = a[j];
	small = i-1;

	for(k=i;k < j;k++)
	{
		if(a[k] <= pivot)
		{
			small++;
			swap(a, k, small);
		}
	}

	swap(a, j, small+1);

	printf("\nPivot = %d\n", a[small+1]);

	printArray(a);

	return (small+1);
}


//F4: QUICK SORT FUNCTION
void quickSort(int a[], int i, int j)
{
	int pos;

	if(i < j)
	{
		pos = partition(a, i, j);

		quickSort(a, i, pos - 1);
		quickSort(a, pos+1, j);
	}
}



/*
OUTPUT:

Enter number of elements: 3

Enter values:
5
4
6

5
4
6

pivot = 6

5
4
6

pivot = 4

4
5
6
*/
