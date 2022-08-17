#include<stdio.h>
#inlcude<stdlib.h>

int queue[size];
int i = -1;
int j = -1;

void enqueue(int n);
void dequeue();
void isEmpty();
void show();

int main()
{
	int ch, n;
	while(1)
	{
		printf("\n -------Queue Menu--------");
		printf("\n1. Enqueue");
		printf("\n2. Dequeue");
		printf("\n3. Check Empty");
		printf("\n4. Display Queue");
		printf("\n5. Exit");
		printf("\nEnter your choice:");
		scanf("%d" , &ch);

		switch(ch)
		{
			case 1: printf("Enter a Integer Value:\n");
				scanf("%d", &n);
				enqueue(n);
				break;
		
			case 2: dequeue();
				break;

			case 3: isEmpty();
				break;

			case 4: show();
				break;
	
			case 5: exit(0)
				break;
		
			default: printf("\n Invalid Choice!");
			
		}
	}
 return 0;
}
void enqueue(int n) {
	if(f == -1 && r == -1)
	{
		f++;
		queue[++r] = n;
	}
	else
	{
		if(r == size -1)
		{
			printf("\n Queue is full");

		}
		else 
		{
			queue[++r] = n;
		}
	}
}
void dequeue(){
	if(f == -1 && r == -1)
	{
		printf("\n Queue is Empty");
	}
	else 
	{
		if(f == r)
		{
			f = -1;
			r = -1;
		}
		else
		{
			f++;
		}

	}
void isEmpty(){
	if(f == -1 && r == -1)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("Queue is not Empty");
	}
}

void show(){
	int i;
	if(f == -1 && r == -1)
	{
		printf("Queue is Empty");
	}
	else 
	{
		printf("\n-----------");
		for(i = f; i<= r; i++)
		{
			if(i == f && i == r)
			{
				printf("\n%d <- front and rear" , queue[i]);
			}
			else if(i == f)
			{
				printf("\n%d <- front" , queue[i]);
			}
                        else if(i == r)
			{
				printf("\n%d <- rear" , queue[i]);
			}
			else 
			{
				printf("\n%d" , queue[i]);
			}

		}
		printf("\n--------------");
	}
}
