//Author:Neha Nair   Branch: IT  Roll no.: 40
//Write a menu driven program to perform the following operations in an ARRAY to 1.Insert 2.Delete 3.Traverse 4.Search

#include<stdio.h>

#include<stdlib.h>
 
#define Size 4 
 
int Top=-1, inp_array[Size];
void Push();
void Pop();
void show();
 // start of main function
int main()
{
	int choice;
	
//Menu 
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Insert\n2.Delete\n3.Traverse\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
//end of main function
 
 //push function
void Push()
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
 
 //Pop function
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}
 
 //display function
void show()
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
