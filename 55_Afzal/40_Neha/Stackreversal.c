/*Reversing the string or number using Stack*/
#include<stdio.h>
#include<conio.h>

struct stack
{
int info;
struct stack *next;
};

struct stack *top;

struct stack* getnode (void)
{
return  (( struct stack* ) malloc (sizeof(struct stack)));
}

void freenode(struct stack *p)

{
free(p);
}

void push (int x)
{
struct stack* newnode;
newnode=getnode();

newnode->info=x;
newnode->next=top;
top=newnode;
}

int pop()
{
int x=top->info;
top=top->next;
return x;
}

void display()
{
struct stack *temp;
temp=top;
printf("\ntop");
while(temp!=NULL)
{
  printf("-> %d",temp->info);
  temp=temp->next;
}
getch();
}

void main()
{
int x;
 clrscr();
printf("\nEnter the String:");
while((x=getchar())!='\n')
{
  push(x);
}

printf("\n Reversed String :");
if(top==NULL)
  printf("\n Stack is Empty");
else
  while(top!=NULL)
  {
  x=pop();
  printf("%c",x);
   }
 getch();
}