/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : STACKS (ARRAY IMPLEMENTATION)
*/


//Stacks - Array implementation (Push, Pop, Peek, Display)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Function prototype
void Push();
void Pop();
void Peek();
void Display();

int *s, as, ls, Top = -1;  //Global variables
char c;  //To continue

int main()
{
	int ch, i;

	do
	{
		printf("\n\nEnter size of array: ");
		scanf("%d", &as);
	}while(as <= 0);

	s = (int *)malloc(as*sizeof(int));  //Dynamic memory allocation

	do
	{
		printf("\nEnter size of list: ");
		scanf("%d", &ls);
	}while((ls<0)||(ls>as));

	if (ls != 0)
	{
		Top = ls-1;

		printf("\nEnter elements of the array: \n");
		for(i=0;i<ls;i++)
			scanf("%d", (s+i));
	}

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
				Push();  //Function call
			}
			break;

			case 2:
			{
				printf("\n\n\tPOP\t\n");
				Pop();  //Function call
			}
			break;

			case 3:
			{
				printf("\n\n\tPEEK\t\n");
				Peek();  //Function call
			}
			break;

			case 4:
			{
				printf("\n\n\tDISPLAY\t\n");
				Display();  //Function call
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



//F1: Push Function
void Push()
{
	int x;

	printf("\n\nEnter value to be inserted: ");
	scanf("%d", &x);

	if(Top == (as-1))
		printf("\nStack overflow.Hence new element cannot be pushed into the stack.\n");

	else  if(Top == -1)
	{
		Top = 0;
		*(s+Top) = x;
		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}

	else
	{
		Top++;
		*(s+Top) = x;
		printf("\nElement %d is inserted successfully.\n", x);
		Display();
	}
}



//F2: Pop Function
void Pop()
{
	int x;

	if(Top == -1)
		printf("\n\nStack underflow.No elements to pop.\n");

	else
	{
		x = *(s+Top);

		Top--;

		printf("\n\nElement %d deleted successfully.\n", x);
		Display();
	}
}



//F3: Peek Function
void Peek()
{
	int i, max = 0;

	if(Top == -1)
		printf("\nList is empty (underflow).\n");

	else
	{
		for(i=0;i<=Top;i++)
		{
			if( *(s+i) > max)
				max = *(s+i);
		}
		printf("\nPeek value= %d\n", max);
	}
}



//F4: Display Function
void Display()
{
	int i;

	if(Top == -1)
		printf("\nList is empty (Underflow).\n");
	else
	{
		printf("\nThe list is:\n");
		for(i=Top;i>=0;i--)
			printf("\n%d",*(s+i));
	}
}









