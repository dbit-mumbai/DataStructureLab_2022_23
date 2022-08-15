//Name:Abhay Singh
//Roll no:57
// program 1
#include<stdio.h>
#include<stdlib.h>
#define size 4

int Top=-1, inp_array[size];
void Push();
void pop();
void show();

int main()
{
	int choice;
	
	while(1)
	{
		printf("\nOperation performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
			break;
			
			case 2: pop();
			break;
			
			case 3: show();
			break;
			
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}

void Push()
{
	int x;
	
	if(Top==size-1)
	{
		printf("\noverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
	}
}

void pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element: %d",inp_array[Top]);
		Top=Top-1;
	}
}

void show()
{
	int i;
	if(Top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\nElement present in the stack: \n");
		 for(i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);
	}
	
}
			


