//Implementation of merge sorting

#include <stdio.h>
#include<conio.h>
#include <string.h>

#define MAX 10

int a[MAX];
int n;

//Function prototypes
void printArray(int a[], int i, int j);
void merge(int a[], int i, int mid, int j);
void mergesort(int a[], int i, int j);

main()
{
	int i, a[MAX];

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter values:\n");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	printf("Unsorted Array:\n");
	printArray(a, 0, n-1);

	mergesort(a, 0, n - 1);

	return(0);
}


//F1: DISPLAY FUNCTION
void printArray(int a[], int i, int j)
{
	int start;

	printf("[");

	for (start=i;start < j;start++)
		printf("%d, ", a[start]);

	printf("%d]", a[j]);
}


//F2: MERGE FUNCTION
void merge(int a[], int i, int mid, int j)
{
	int i1, temp[10], l, r, m, k;

	printf("Left: ");
	printArray(a, i, mid);

	printf(" Right: ");
	printArray(a, mid + 1, j);

	l = i;
	r = j;
	m = mid + 1;
	k = l;

	while((l <= mid) && (m <= r))
	{
		if(a[l] <= a[m])
			temp[k++] = a[l++];

		else
			temp[k++] = a[m++];
	}

	while(l <= mid)
		temp[k++] = a[l++];

	while(m <= r)
		temp[k++] = a[m++];

	for( i1=i;i1 <= j;i1++)
		a[i1] = temp[i1];

	printf("After Merging:\n");
	printArray(a, i, j);
}


//F3: MERGE SORT FUNCTION
void mergesort(int a[], int i, int j)
{
	int mid = 0;

	if(i < j)
	{
		mid = (i+j)/2;

		mergesort(a, i, mid);
		mergesort(a, mid + 1, j);
		merge(a, i, mid, j);
	}
}



/*
OUTPUT:
Enter number of elements: 3

Enter values:
5
4
6

Unsorted Array: [5, 4 ,6]

Left: [5] Right: [4]

After merging: [4 ,5]

Left: [4,5] Right: [6]

After merging: [4,5,6]
*/
