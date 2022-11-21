#include<stdio.h>
#include<stdlib.h>

#define Size 4

int Top=-1, inp_array[Size];
void Insert();
void Delete();
void Traverse();

int main()
{
	int choice;

	while(1)
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Insert the element\n2.Delete the element\n3.Traverse\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: Insert();
					break;
			case 2: Delete();
					break;
			case 3: Traverse();
					break;
			case 4: exit(0);

			default: printf("\nInvalid choice!!");
		}
	}
}

void Insert()
{
	int x;

	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
	}
}

void Delete()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nDeleted element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}

void Traverse()
{


	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);
	}
}
