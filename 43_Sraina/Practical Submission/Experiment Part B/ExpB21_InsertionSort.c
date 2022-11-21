/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : INSERTION SORT
*/


//Insertion Sorting - Ascending Order 

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100], n, temp, i, j;

	printf("\nEnter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<n;i++)
	{
		temp = a[i];

		j=i-1;

		while((temp<a[j]) && (j>=0))
		{
			a[j+1] = a[j];
			--j;
		}

		a[j+1]=temp;
	}

	printf("\nAfter sorting the list is:\n");
	for(i=0;i<n;i++)
		printf("\n%d", a[i]);
}



