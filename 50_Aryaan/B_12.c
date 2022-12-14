/ Queue ADT using array*/


#include<stdio.h>
#include<stdlib.h>
int front = -1;
int rear = -1;
#define n 5
int queue[n];


void Enqueue(int x)
{
	//printf("Enter an element to be inserted\n";
	//scanf("%d",&x);
	if(rear == n-1)
		printf("Queue is full");
		
	else if (front == -1 && rear == -1)
	{
		printf("Enter an element to be inserted\n");
		scanf("%d",&x);
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		printf("Enter an element to be inserted\n");
		scanf("%d",&x);	
		rear++;
		queue[rear] = x;	
	}
}

void Dequeue()
{
	if(front == -1 && rear == -1)
		printf("Queue is empty\n");

	else if(front == rear)
	{
		printf("Dequeued element is %d\n",queue[front]);
		front = rear = -1;
	}

	else
	{
		printf("Dequeued element is %d\n",queue[front]);
		front++;
	}
}

void Display()
{
	for(int i = rear; i>=front; i--)
	{
		printf("%d\n",queue[i]);
	}
}


int main()
{
	int ch;
	int x;
	
	while(x)
	{
		printf("Enter your choice :\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1 : Enqueue(x);
				break;
			case 2 : Dequeue();
				break;
			case 3 : Display();
				break;
			case 4 : exit(0);
				break;
			default: printf("Invalid choice\n");
				break;
	}
	}
}
