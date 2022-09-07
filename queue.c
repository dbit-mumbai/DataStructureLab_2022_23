#include<stdio.h>
#define N 5
void enqueue(int x);
void dequeue();
void display();
int queue[N];
int front =-1;
int rear =-1;

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	dequeue();
	dequeue();
	display();
	
}
void enqueue(int x)
{
	if(rear==N-1)
	{
		printf("Overflow!");	
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
			
	}
	else
	{
		rear=rear+1;
		queue[rear]=x;
	
	}
	printf("This is endueue function\n");
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
			
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("%d\n",queue[front]);
		front=front+1;
	}

}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}

	else 
	{
		for(i=front;i<rear+1;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
