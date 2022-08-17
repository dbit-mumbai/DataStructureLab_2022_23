#include<stdio.h>
#include<stdlib.h>
#define size 6

int queue[size];
int i= -1;
int j= -1;

void enqueue(int);
void dequeue();
void isEmpty();
void show();

int main()
{
	int ch, n;
	while(1)
	{
		printf("\n\n Queue menu");
		printf("\n\n enqueue");
		printf("\n\n dequeue");
		printf("\n\n Check empty");
		printf("\n\n Display Queue");
		printf("\n\n Exit");
		printf("\n\n Enter your choice");
		
		switch(ch)
		{
		case 1:
			printf"Enter an integer value:";
			scanf("%d", &n);
			enqueue(n);
			break;
			
		case 2:
			dequeue();
			break;
			
		case 3:
			isEmpty();
			break;
			
		case 4:
			show();
			break;
			
		case 5:
			exit(0);
			break;
			
		default:
			printf("\n\n Invlid Choice");
		}
	}		
			
