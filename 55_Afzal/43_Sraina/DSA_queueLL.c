#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next; //Self referential
};

struct node* getnode()  //Dynamic memory allocation
{
	return((struct node*) malloc(sizeof(struct node)));
}

void freenode(struct node *p)
{
	free(p);  //Memory released
}

//Function prototypes
void Enq();
void Deq();
void Display();

struct node *Front = NULL, *Rear = NULL; //Global variables
int size; //Global variable
char c;  //To continue

main()
{
	int ch;
	struct node *temp = NULL, *newnode;

	do
	{

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

				if(size == 10)
					printf("\nList overflow.Enqueue not possible.\n");
				else
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

	}while(ch != 3);

	return(0);
}



//F1: Enqueue function
void Enq()
{
	int x;
	struct node *temp, *newnode;

	temp = Rear;

	printf("\n\nEnter value to be inserted: ");
	scanf("%d", &x);

	newnode = getnode();
	newnode->data = x;
	newnode->next = NULL;

	if((Front == NULL)&&(Rear == NULL))
	{
		temp = newnode;
		Front = temp;
		Rear = temp;
	}

	else
	{
		temp->next = newnode;
		temp = temp->next;
		Rear = temp;
	}
	size++;

	printf("\nElement %d is inserted successfully.\n", x);
	Display();
}



//F2: Dequeue function
void Deq()
{
	int x;
	struct node *temp;

	temp = Front;

	if((Front == NULL)&&(Rear == NULL))
		printf("\n\nList underflow.Dequeue Not Possible.\n");

	else if(Front == Rear)
	{
		x = temp->data;

		freenode(temp);

		temp = NULL;
		Front = NULL;
		Rear = NULL;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}

	else
	{
		x = temp->data;

		Front = temp->next;

		freenode(temp);

		size--;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}
}



//F3: Display function
void Display()
{
	struct node *temp;

	temp = Front;

	if(temp==NULL)
		printf("\nThe list is empty (Underflow).\n");
	else
	{
		printf("\nThe list elements are: ");

		while(temp != NULL)
		{
			printf("\n%d",temp->data);
			temp = temp->next;
		}
	}
}
