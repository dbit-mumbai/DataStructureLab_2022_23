#include<stdio.h>
#include<stdlib.h>

//Function prototypes
void Push (int digit);
int Pop ();

int Top = -1;  //Global variable
int x, stk[25], rstk[25];  //Global variable

void Push (int digit)
{
	stk[++Top] = digit;
}

int Pop ()
{
	return (rstk[Top--]);
}

main()
{
	int temp, digit, rev=0, num, i, j;

	printf("\nEnter number: ");
	scanf ("%d", &num);

	temp = num;

	while (temp != 0)
	{
		digit = temp % 10;
		Push (digit);
		temp = temp / 10;
	}

	for (i=Top, j=0;  i>=0; i--, j++)
		rstk[j] = stk[i];

	while (Top >=0)
	{
		digit = Pop();
		rev = rev*10 + digit;
	}

	if(rev == num)
		printf("\nGiven number is plaindrome.\n");
	else
		printf("\nGiven number is not a plaindrome.\n");
	return (0);
}

