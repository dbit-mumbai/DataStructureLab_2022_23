// C Program to write a menu-driven program for stack

//Name: Vanessa jency    Roll.no.37      Batch.B     Department.IT
//Date: 16.08.2022


#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack_arr[MAX];
int top=-1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main(){
	int choice, item;
	while(-1){
		printf("\n------Stack Operation------");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display top element");
		printf("\n4.Display stack elements");
		printf("\n5.Quit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("\nEnter the item to be pushed: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item=pop();
				printf("\nPopped item is %d\n",item);
				break;
			case 3:
				printf("\nItem at the top is %d\n",peek());
				break;
			case 4:
				display();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("\nWrong choice");
		} //End of switch
	} //End of while
	return 0;
} //End of main

void push(int item){
	if(isFull()){
		printf("\nStack Overflow\n");
		return;
	}
	top=top+1;
	stack_arr[top]= item;
}
int pop(){
	int item;
	if(isEmpty()){
		printf("\nStack Underflow\n");
	}
	item=stack_arr[top];
	top= top-1;
	return item;
}
int peek(){
	if( isEmpty()){
		printf("\nStack Underflow\n");
	}
	return stack_arr[top];
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(){
	if(top==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}
void display(){
	int i;
	if(isEmpty()){
		printf("\nStack is Empty\n");
		return;
	}

	printf("\nStack Elements are : ");
	for(i=top;i>=0;i--){
		printf("\n%d",stack_arr[i]);
	}	
	printf("\n");
}
	
