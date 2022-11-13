 /*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : BUBBLE SORTING
*/

//To implement bubble sorting (Ascending order).

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n, i, j, temp=0, flag = 1, *arr;

	printf("\nEnter number of elements: ");
	scanf("%d", &n);

	arr = (int *) malloc(n*sizeof(int));  //Dynamic memory allocation of array

	printf("\nEnter elements:\n");
	for (i=0;i<n;i++)
		scanf("%d", (arr+i));

	for (i=0;i<n-1;i++) // Number of passes
	{
		flag =0;

		for(j=0;j<n-1-i;j++)
		{
			if(*(arr+ j) > *(arr+ (j+1)))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr +(j+1));
				*(arr + (j+1)) = temp;

				flag = 0;
			}
		}

		if (flag)
			break;
		else
			flag = 1;
	}

	printf("Sorted list:\n");
	for (i=0;i<n;i++)
		printf("%d\n", *(arr + i));

	getch();
}


