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



//F2: Infix to Prefix conversion
void Prefix(char infx[])
{
	char rinfx[50], prfx[50], rprfx[50], x, ch;
	int i=0, k=0, l=0, j=0;

	l = strlen(infx);

	for(i=l-1;i>=0;i--)
	{
		rinfx[j] = infx[i];
		j++;
	}

	rinfx[j] = '\0';

	for(i=0; rinfx[i] != '\0';i++)
	{
		if(rinfx[i] == '(')
			rinfx[i] = ')';

		else if(rinfx[i] == ')')
			rinfx[i] = '(';
	}

	Push('#');

	i = 0;

	while((ch=rinfx[i++]) != '\0')
	{
		if(ch == '(')
			Push(ch);

		else
		{
			if(isalnum(ch))
				prfx[k++] = ch;

			else
			{
				if(ch == ')')
				{
					while(s[top] != '(')
						prfx[k++] = Pop();

					x = Pop();
				}

				else
				{
					while(Pre(s[top]) >= Pre(ch))
						prfx[k++] = Pop();

					Push(ch);
				}
			}
		}
	}

	while(s[top] != '#')
		prfx[k++] = Pop();

	prfx[k] = '\0';

	j=0;

	for(i=(strlen(prfx)-1);i>=0;i--)
	{
		rprfx[j] = prfx[i];
		j++;
	}

	rprfx[j] = '\0';

	printf("The prefix expression is: %s\n", rprfx);
}