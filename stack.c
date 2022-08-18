#include<stdio.h>
#include<stdlib.h>

int Top = -1;
int size = 5;
int input_array[5];
void Push();
void pop();
void show();



int main()
{ 
	int n , n1;
	while(1)
	{
		printf("------------------Stack Operations---------------------\n");
		printf("1. Push an element into the stack\n");
		printf("2. Pop an element from the stack\n");
		printf("3. Display an element from the stack\n");
		printf("4. Exit\n");
 
		printf("Enter your choice: \n");
		scanf("%d" , &n);
		
		switch (n)
		{
			case 1:
				Push(n1);
				break;

			 // case 2: pop();
				//break;

			// case 3: display();
				//break;

			// case 4:  exit(1);

			default : printf("\n Wrong Choice.");
		}

	}

}

void Push()
{	
	int a ; 


	if (Top == size - 1)
	{
		printf("Stack Overflow!");		
	}
	else
	{
		printf("Enter the elements to be inserted into the stack:\n");
		scanf("%d" , &a);exit(1);
            

		Top = Top + 1;
		input_array[Top] = a;
			
	}
}

void pop()

{	
	
}
