/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : CIRCULAR QUEUE (ARRAY IMPLEMENTATION)
*/


//Circular Queue - Array implementation (Enqueue, Dequeue and Display)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Function prototypes
void Enq();
void Deq();
void Display();

int *Q, as, ls, Front = -1, Rear = -1;  //Global variables
char c;  //To continue

int main()
{
	int ch, i;


	do
	{
		printf("\n\nEnter size of array: ");
		scanf("%d", &as);
	}while(as <= 0);

	Q = (int *) malloc(as*sizeof(int));  //Dynamic memory allocation

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
		scanf("%d", (Q+i));
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
				Enq ();  //Function call
			}
			break;

			case 2:
			{
				printf("\n\n\tDEQUEUE\t\n");
				Deq ();  //Function call
			}
			break;

			case 3:
			{
				printf("\n\n\tDISPLAY\t\n");
				Display ();  //Function call
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

	if((Front == 0)&&(Rear == as-1))
		printf("\nList overflow.Enqueue Not Possible.\n");

	else if(Rear == Front-1)
		printf("\nList overflow.Enqueue Not Possible.\n");

	else if((Rear == as-1)&&(Front != 0))
	{
		Rear = 0;
		*(Q+Rear) = x;

		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}

	else  if((Front == -1)&&(Rear == -1))
	{
		Front = 0;
		Rear = 0;

		*(Q+Rear) = x;

		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}

	else
	{
		Rear++;

		*(Q+Rear) = x;

		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}
}



//F2: Dequeue function
void Deq()
{
	int x;

	if((Front == -1)&&(Rear == -1))
		printf("\n\nList underflow.Dequeue Not Possible.\n");

	else if(Front == Rear)
	{
		x = *(Q+Front);

		Front = -1;
		Rear = -1;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}

	else if(Front == as-1)
	{
		x = *(Q+Front);

		Front = 0;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}

	else
	{
		x = *(Q+Front);

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
		printf("\nList is empty.\n");

	else if(Front == Rear)
		printf("\n%d",*(Q+Front));

	else
	{
		printf("\nThe list is:\n");

		i = Front;

		if(Rear < Front)
		{
			for(i=Front;i<=as-1;i++)
				printf("\n%d",*(Q+i));

			for(i=0;i<=Rear;i++)
				printf("\n%d",*(Q+i));
		}

		else
		{
			for(i=Front;i<=Rear;i++)
				printf("\n%d",*(Q+i));

		}
	}
}


/*
OUTPUT:



Enter size of array: 5

Enter size of list: 2

Enter elements of the array:
30 40

The new list is:

The list is:

30
40

--------QUEUES--------


1.ENQUEUE
2.DEQUEUE
3.DISPLAY

Enter your choice: 1


        ENQUEUE


Enter value to be inserted: 50

Element 50 is inserted successfully.

The list is:

30
40
50

Do you wish to continue (Y/N) ? y


The new list is:

The list is:

30
40
50

--------QUEUES--------


1.ENQUEUE
2.DEQUEUE
3.DISPLAY

Enter your choice: 2


        DEQUEUE


Element 30 deleted successfully.

The list is:

40
50

Do you wish to continue (Y/N) ? y


The new list is:

The list is:

40
50

--------QUEUES--------


1.ENQUEUE
2.DEQUEUE
3.DISPLAY

Enter your choice: 3


        DISPLAY

The list is:

40
50

Do you wish to continue (Y/N) ? n

C:\>

*/




	
