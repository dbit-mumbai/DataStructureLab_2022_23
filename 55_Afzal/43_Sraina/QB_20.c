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

	for (i=0;i<n-1;i++) // Number of passes (n-1)
	{
		for(j=0;j<n-1-i;j++)
		{
            //printf("\ni = %d and j = %d\n", i, j);
            //printf("Flag = %d\n", flag);

			if(*(arr+ j) > *(arr+ (j+1)))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr +(j+1));
				*(arr + (j+1)) = temp;
			}
		}
	}

	printf("Sorted list:\n");
	for (i=0;i<n;i++)
		printf("%d\n", *(arr + i));
}