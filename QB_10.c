//To convert a given infix expression into postfix and prefix expression.

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50

char s[MAX];
int top = -1;

// Function prototypes
void Push(char x);
char Pop();
void Postfix(char infx[]);
void Prefix(char infx[]);
int Pre(char x);

void Push(char x)
{
	s[++top] = x;
}

char Pop()
{
	return(s[top--]);
}

int Pre(char x)
{
	switch(x)
	{
		case '#':
			return 0;

		case '(':
			return 1;

		case '-':
		case '+':
			return 2;

		case '/':
		case '*':
			return 3;
	}
}

main()
{
	int ch;
	char infx[50];

	clrscr();

	do
	{
		printf("\nEnter the Infix expression: ");
		scanf("%s", infx);

		printf("\n1.INFIX to POSTFIX");
		printf("\n2.INFIX to PREFIX");
		printf("\n3.END");

		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				Postfix(infx);
			break;

			case 2:
				Prefix(infx);
			break;

			case 3:
				printf("PROGRAM ENDS !!!");
		}

	}while(ch != 3);
}


//F1: To accept the Infix expression
void Postfix(char infx[])
{
	char pofx[50], ch, x;
	int i=0, k=0;

	Push('#');

	while((ch=infx[i++])!='\0')
	{
		if(ch == '(')
			Push(ch);

		else
		{
			if(isalnum(ch))
				pofx[k++] = ch;

			else
			{
				if(ch == ')')
				{
					while(s[top] != '(')
						pofx[k++] = Pop();

					x = Pop();
				}

				else
				{
					while(Pre(s[top]) >= Pre(ch))
						pofx[k++]= Pop();

					Push(ch);
				}
			}
		}
	}

	while(s[top] != '#')
		pofx[k++] = Pop();

	pofx[k]='\0';

	printf("\nThe postfix expression is : %s\n",pofx);
}