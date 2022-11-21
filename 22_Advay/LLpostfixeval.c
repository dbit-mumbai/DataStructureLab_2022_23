#include <stdio.h>
#include <conio.h>
#define null 0

typedef struct node
{
int info;
struct node *next;
};

struct node *newnode, *temp,*top;

struct node* getnode (void)
{
return  (( struct node* ) malloc (sizeof(struct node)));
}

void freenode(struct node* p)

{
free(p);
}

void push (int x)
{
struct node* newnode;
newnode=getnode();

newnode->info=x;
newnode->next=top;
top=newnode;
}


int pop()
{
int x;
if(top==NULL)
{
printf("\n List is EMTPTY");
return -1;
}
else
{
temp=top;
x=top->info;
top=top->next;
free(temp);
return x;
}
}

void main()
{
char a[20];
int i,v1,v2,res,k;
top=null;
clrscr();
printf("\nEnter the postfix expression using linked list:");
//gets(a);
while((a[i]=getchar())!='\n')
{
	if(isdigit(a[i]))
		{
				k=a[i]-48;
				if(k>0&&k<=9)
				{
					push(k);
				}
		}
	else
	   {
	     if(top==NULL)
		 printf("\nStack is Empty\n");
	     else
		     {
			v2=pop();
			v1=pop();

			switch(a[i])
			{
			case '+': res=v1+v2;
							break;
			case '-': res=v1-v2;
							break;
			case '*': res=v1*v2;
							break;
			case '/': res=v1/v2;
							break;
			default:printf("\nEnter an valid postfix expression");
			}
		      push(res);
		     }
	}
i++;
}

printf("Result is:%d",top->info);
getch();

}

