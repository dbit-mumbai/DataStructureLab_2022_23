/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : STACKS (LINKED LIST IMPLEMENTATION)
*/


//Stacks - Linked list implementation (Push, Pop, Peek, Display)

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
void Push();
void Pop();
void Peek();
void Display();

struct node *Top = NULL;  //Global variable
int size;  //Global variable
char c;  //To continue

int main()
{
	int ch, i, x;
	struct node *temp = NULL, *newnode;


	printf("\nTo create the list:\n");
	do
	{
		printf("\n\nEnter number of elements in the list (MAX SIZE 10): ");
		scanf("%d", &size);
	}while((size < 0)||(size > 10));

	if(size != 0)
	{
		printf("\nEnter values: \n");
		for(i=1;i<=size;i++)
		{
			scanf("%d", &x);

			newnode = getnode();
			newnode->data = x;

			if(i==1)
			{
				temp = newnode;
				newnode->next = NULL;
			}

			else
			{
				newnode->next = temp;
				temp = newnode;
			}

			Top = temp;

		}

		printf("\nList of %d elements created successfully.\n", size);
	}

	else
		printf("\nNo list created.\n");

	do
	{
		printf("\nThe new list is: \n");
		Display();

		printf("\n\n--------STACKS--------\n");
		printf("\n\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.PEEK");
		printf("\n4.DISPLAY");

		printf("\n\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("\n\n\tPUSH\t\n");

				if( size == 10)
					printf("\nStack overflow.\n");
				else
					Push ();  //Function call
			}
			break;

			case 2:
			{
				printf("\n\n\tPOP\t\n");
				Pop (); //Function call
			}
			break;

			case 3:
			{
				printf("\n\n\tPEEK\t\n");
				Peek ();  //Function call
			}
			break;

			case 4:
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



//F1: Push function
void Push()
{
	int x;
	struct node *temp, *newnode;

	temp = Top;

	printf("\n\nEnter value to be inserted: ");
	scanf("%d", &x);

	newnode = getnode();
	newnode->data = x;

	if(Top == NULL)
	{
		temp = newnode;
		temp->next = NULL;
		Top = newnode;
	}

	else
	{
		newnode->next = temp;
		Top = newnode;
	}

	size++;

	printf("\nElement %d is inserted successfully.\n", x);
	Display();
}



//F2: Pop function
void Pop()
{
	int x;
	struct node *temp;

	temp = Top;

	if(Top == NULL)
		printf("\n\nStack underflow.\n");

	else
	{
		x = temp->data;

		Top = temp->next;

		freenode(temp);

		size--;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}
}



//F3: Peek function
void Peek()
{
	int max = 0;
	struct node *temp;

	temp = Top;

	if(temp==NULL)
		printf("\nThe list is empty (underflow).\n");

	else
	{

		while(temp != NULL)
		{
			if(temp->data > max)
				max = temp->data;

			temp = temp->next;
		}

		printf("\nPeek value= %d\n", max);
	}
}



//F4: Display function
void Display()
{
	struct node *temp;

	temp = Top;

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








	
