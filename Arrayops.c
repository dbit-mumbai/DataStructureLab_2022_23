#include<stdio.h>
#include<stdlib.h>

int array[10];
int j = 0;

void insert(int n)
{
	n = n + j;

	if(n > 10 || n < 1)
	{
		printf("Array Size Exceeded!\n");
	} 
	else 
	{
		for(int i = j; i < n; i++)
		{
			printf("Enter a element value : ");
			scanf("%d", &array[i]);
			j++;
		}
	}
}

void delete(int value)

{
	int i;
	for(i = 0; i < 10; i++)
	{
		if(value == array[i])
		{
			array[i] = 0;return;
		}
	}
	printf("value not found!");
}

void display_array()

{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}

void search(int element)

{
	for(int i = 0; i < 10; i++)
	{
		if(array[i] == element)
		{
			printf("found!");return;
		}
	}
	printf("not found!");
}

int main()

{
	int ch, choice, n, val, element;
	while(1)
	{

		printf("\nops : \n");
		printf("1.insert\n2.delete\n3.display_array\n4.search\n5.Exit\n");
		printf("Enter ops : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number of elements to add : ");
				scanf("%d", &n);
				insert(n);break;
			case 2:
				printf("Enter the value to be deleted : ");
				scanf("%d", &val);
				delete(val);break;
			case 3: 
				display_array();break;
			case 4:
				printf("Enter Element to search : ");
				scanf("%d", &element);
				search(element);break;
			case 5:
				exit(0);break;
			default:
				printf("E : Invalid ops!\n");
		}
		
	}

	return 0;
}
