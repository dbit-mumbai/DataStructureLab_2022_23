/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : QUEUES (ARRAY IMPLEMENTATION)
*/


//Queues - Array implementation (Enqueue, Dequeue and Display)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Function prototypes
void Enq();
void Deq();
void Display();

int *q, as, ls, Front = -1, Rear = -1;  //Global variables
char c;  //To continue

int main()
{
	int ch, i;

	do
	{
		printf("\n\nEnter size of array: ");
		scanf("%d", &as);
	}while(as<=0);

	q = (int *)malloc(as*sizeof(int));

	do
	{
		printf("\nEnter size of list: ");
		scanf("%d", &ls);
	}while((ls<0)||(ls>as));

	if(ls != 0)
	{
		Front = 0;
		Rear = ls-1;
		printf("\nEnter elements of the array: \n");

		for(i=0;i<ls;i++)
			scanf("%d", (q+i));
	}

	do
	{

		printf("\nThe new list is: \n");
		Display();

		printf("\n\n--------QUEUES--------\n");
		printf("\n\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.DISPLAY");

		printf("\n\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("\n\n\tENQUEUE\t\n");
				Enq ();
			}
			break;

			case 2:
			{
				printf("\n\n\tDEQUEUE\t\n");
				Deq ();
			}
			break;

			case 3:
			{
				printf("\n\n\tDISPLAY\t\n");
				Display ();
			}
			break;

			default:
				printf("\n\nINVALID INPUT!!\n");
		}

		fflush(stdin);

		printf("\n\nDo you wish to continue (Y/N) ? ");
		scanf(" %c", &c);

	}while((c=='y')||(c=='Y'));

	return(0);
}



//F1: Enqueue function
void Enq()
{
	int x;

	printf("\n\nEnter value to be inserted: ");
	scanf("%d", &x);

	if(Rear == as-1)
		printf("\nList overflow.Enqueue Not Possible.\n");

	else  if((Front == -1)&&(Rear == -1))
	{
		Front = 0;
		Rear = 0;

		*(q+Rear) = x;

		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}

	else
	{
		Rear++;
		*(q+Rear) = x;

		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}
}



//F2: Dequeue function
void Deq()
{
	int x;

	if(Front == -1)
		printf("\n\nList underflow.Dequeue Not Possible.\n");

	else if(Front == Rear)
	{
		x = *(q+Front);

		Front = -1;
		Rear = -1;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}

	else
	{
		x = *(q+Front);
		Front++;
		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}
}



//F3: Display function
void Display()
{
	int i;

	if((Front == -1)&&(Rear == -1))
		printf("\nList is empty (Underflow).\n");

	else
	{
		printf("\nThe list is:\n");

		for(i=Front;i<=Rear;i++)
			printf("\n%d",*(q+i));
	}
}








