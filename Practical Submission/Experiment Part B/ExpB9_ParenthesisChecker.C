/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : PARENTHESES CHECKER (using stacks).
*/

//Application of stacks -  implementing parentheses checker.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

# define max 10

//Function prototypes
void Push (char x);
char Pop ();

int Top = -1;  //Global variable
char stk[max];  //Global variable

void Push (char x)
{
	if (Top == max-1)
		printf("\nStack overflow.\n");

	else
		stk[++Top] = x;
}

char Pop ()
{
	int x;

	if (Top == -1)
		printf("\nStack underflow.\n");

	else
		x = stk[Top--];

	return (x);
}

int main()
{
	int i, flag = 1;
	char exp[max], temp;

	do
	{
		printf("\nEnter expression (max 10 characters): ");
		gets (exp);
	}while(strlen(exp) > 10);

	for(i=0;i<strlen(exp);i++)
	{
		if((exp[i] == '(')||(exp[i] == '{')||(exp[i] == '['))
			Push(exp[i]);

		else if((exp[i] == ')')||(exp[i] == '}')||(exp[i] == ']'))
		{
			if (Top == -1)
				flag = 0;

			else
			{
				temp = Pop();

				if ((exp[i] == ')') && ((temp == '}')||(temp == ']')))
					flag = 0;

				if ((exp[i] == '}') && ((temp == ')')||(temp == ']')))
					flag = 0;

				if ((exp[i] == ']') && ((temp == '}')||(temp == ')')))
					flag = 0;
			}
		}
	}

	if(Top >= 0)
		flag = 0;

	if(flag == 0)
		printf("\nINVALID EXPRESSION.\n");
	else
		printf("\nVALID EXPRESSION.\n");

	

	return (0);
}

