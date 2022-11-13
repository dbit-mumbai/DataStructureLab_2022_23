/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : REVERSE STRING (using stacks).
*/

//To reverse the given string using stacks.

#include<stdio.h>
#include<conio.h>
#include<String.h>
#include<stdlib.h>

//Function prototypes
void Push (char x);
void Pop ();

int Top = -1;  //Global variable
char x, stk[25];  //Global variable

void Push (char str)
{
   stk[++Top] = str;
}

void Pop ()
{
	x = stk[Top];
	Top --;
}

int main()
{
	int i;
	char str[25];


	printf ("This program uses operations of stacks to reverse ");
	printf ("the given string\n\n");

	do
	{
		printf("\nEnter string (max 25 characters): ");
		scanf ("%s", str);
	}while(strlen(str) > 25);

	printf("\nThe reversed string is: ");

	for(i=0;i<strlen(str);i++)
		Push(str[i]);

	if(Top == -1)
		printf("\nEmpty string.\n");

	else
	{
		for(i=0;i<strlen(str);i++)
		{
			Pop();
			printf("%c", x);
		}
	}


	return (0);
}






