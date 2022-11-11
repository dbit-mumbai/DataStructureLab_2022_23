#include <stdio.h>
#include <stdlib.h>
#define max 50
// #include <conio.h>

int stack[max];
int top=-1;   // Stack initialization condition

/* Function Prototype */
 // push method is used to insert element into the stack //
void push(int);

// pops method is used to delete element from the stack //
void pop();

// display method is used to travese and print all teh elements from the stack //
void display();


/* Main Method */
void main()
{
int ch;  // This is used to store user choice
int n1; 

while(1)
{
	//clrscr();

	printf("\n----Stack Operation---");
	printf("\n1. Push an element into the stack");
	printf("\n2. Pop out an element from the stack");
	printf("\n3. Display the stack elements");
	printf("\n4. Exit");


	printf("\n Enter your choice:");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: printf("\n Enter the element to be pushed into the stack:"); 
				scanf("%d",&n1);
				push(n1);
				break;

		case 2: pop();
				//getch();
				break;

		case 3:	display();
				//getch();
				break;
		case 4: exit(1);

		default: 	printf("\n Wrong Choice");
					break;
	} 	//end of switch

} //end of while

}
/* End of Main Method */



/* Push Method */
void push(int x)
{
	if(top==max-1)
		{
		 	printf("Stack is FULL");
		}
	else
		{
			top++;
			stack[top]=x;
		}
}
/* End of Push Method */



/* Pop Method */
void pop()
{
	if(top==-1)
	{
		printf("Stack is EMPTY");

	}
	else
	{
	  printf("\n %d element popped out of the stack",stack[top--]);
	}
}
/* End of Pop Method */



/* Display Method */
void display()
{
	int i;
	if(top==-1)
	 	printf("Stack is EMPTY");
	else
	{
		printf("\n Elements in the stack are");
		for(i=top;i>=0;i--)
		{
	 		printf("\n %d",stack[i]);
		}
	}
}
/* End of Display Method */

