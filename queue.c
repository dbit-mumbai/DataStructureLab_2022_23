#include<stdio.h>
#include<stdlib.h>
define size 6


int queue[size];
int f= -1;
int r= -1;

void enqueue(int);
void dequeue();
void isEmpty();
void show();

int main()
{
	int ch, n;
	while(1)
	{
		printf("\n.....Queue Menu.....\n");
		printf("\n 1. Enqueue");
		printf("\n 2. Dequeue");
		printf("\n 3.Check Empty");
		printf("\n 4. Display Queue");
		printf("\n 5.Exit");
		printf("\n Enter your choice");		
		
		switch(ch)
		{

			case 1:
				printf("Enter a integer value :");
				scanf("%d",&n);
				enqueue(n);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				isEmpty();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Choice!");	
		}
	}
	return 0;

}
void enqueue(int n)
{
	if(f == -1 && r == -1)
	{
		printf("\nQueue is Empty!");
	}
	else 
	{
		if(r == size - 1)
		{
			printf("Queue is full!");
		}
		else
		{
			queue[++r] = n;
		}
	}	
}
void dequeue()
{
	if(f == -1 && r == -1)
	{
		printf("\nQueue is Empty!");
	}
	else if(f == r)
	{
		f = -1;
		r = -1;
	}
	else
	{
		f++;
	}
}
void isEmpty()
{
	if(f == -1 && r == -1)
	{
		printf("\nQueue is Empty!");
	}
	else
	{
		printf("\nQueue is not Empty!");
	}
}
void show()
{
	int i;
	if(f == -1 && r == -1)
	{
		printf("\n")
	}
}
