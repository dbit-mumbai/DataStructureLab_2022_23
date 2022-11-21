#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
# define size 5

int queue[size];
int front,rear;


/* Function Prototype */

void enqueue(int);
void dequeue();
void display();


//* Initialization Method *{
int front=0;
int rear=-1;


/* Enqueue Method */

void enqueue(int x)
{
	if (rear==size-1)   //rear is pointing to last element in the queue
			printf("Queue Overflow");
	else
		{
			queue[++rear]=x;
		}
}
/* End of Enqueue Method */

/* Dequeue Method */

void dequeue()
{
  if(rear<front)                                                  
		printf("\n Queue is Empty");
	else
	{
	  printf("\n  %d is Deleted ",queue[front++]);
	}
}
/* End of Dequeue Method */

/* Display Method */

void display()
{
	int i;
  if(rear<front)
		printf("\n Queue Underflow");
  else
	 for(i=front;i<=rear;i++)
		{
			printf("\n %d ",queue[i]);
		}
}
/* End of Display Method */



void main()
{
int ch;
int x;
int front = 0;
int rear = -1;

while(1)
{
//clrscr();
printf("\n----Queue Operation---");
printf("\n1. Enqueue element ");
printf("\n2. Dequeue element ");
printf("\n3. Display the Queue elements");
printf("\n4. Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n Enter the element to be enqueued:");
			scanf("%d",&x);
			enqueue(x);
			break;
case 2: dequeue();
		//	getch();
			break;
case 3: display();
		//	getch();
			break;
case 4: exit(1);
default: printf("\n Wrong Choice");
break;
}
}
}