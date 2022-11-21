#include<stdio.h>

#define size 5

void Enqueue(int);
void Dequeue();
void Display();

int elements[size], front = -1, rear = -1;

int main()
{
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(4);
	Enqueue(5);

	Enqueue(6); // 6th element can't be added because queue is full

	Display();

	Dequeue(); // remove the element

	Display(); // Here only 4 elements



return 0;
}

void Enqueue(int value){
	if(rear == size - 1){
		printf("\n Queue is full");	
	}
	else{
		if(front == -1){
		front = 0;
		rear++;
		elements[rear] = value;
		printf("inserted element --> %d\n", value);
		}	
	}
}
void Dequeue(){
	if(front == -1){
		printf("\n Queue is empty");	
	}
	else{
		printf("Deleted element --> %d\n", elements[front]);
		front++;
		if(front > rear){
			front = rear = -1;
		}
		
	}

}
void Display(){
	if(rear == -1){
		printf("\nQueue is empty");
	}
	else{
		int i;
		printf("elements in Queue:");
		for(i = front; i <= rear; i++){
			printf("%d ", elements[i]);		
		}
	}
	printf("\n");
}



