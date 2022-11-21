/*Doubly Ended Queue - Can Insert/Delete at/from both front and rear end*/

#include <stdio.h>
# include <stdlib.h>
//# include <conio.h>

struct node
{
int info;
struct node* next;
};

struct node *front,*rear;

void init()
{
front=rear=NULL;
}


struct node* getnode (void)
{
return  (( struct node* ) malloc (sizeof(struct node)));
}

void freenode(struct node *p)
{
free(p);
}

int empty()
{
 if(front==NULL && rear==NULL)
    return 1;
 else
    return 0;
}

void display();

void enqueue_front(int x)
{
struct node *newnode;
newnode=getnode();
newnode->info=x;
newnode->next= front;

front=newnode;

if(rear==NULL)                    // THIS IS ADDITIONAL STATEMENT
	rear=newnode;

display();
}

void dequeue_front()
{
struct node * temp;
temp=front;

 if(front==NULL && rear==NULL)
	 printf("Double Ended Queue is already Empty");
 else
	{
	    printf("Element  %d successfully deleted",temp->info);
	    if(front==rear)
		{
		front=rear=NULL;
		}
		else
			 front=temp->next;                          // modified step

		freenode(temp);
		display();
	}

}

void enqueue_rear(int x)
{

struct node *newnode, *temp;
newnode=getnode();
newnode->info =x;
newnode->next=NULL;

if(front==NULL && rear==NULL)                 // Condition to check whether list is empty or not
	{
	 front=rear=newnode;
	}
else
	{
		rear->next=newnode;
		rear=newnode;
	}
	display();

}
void dequeue_rear()
{

int x;
struct node * temp, *ptr;                           // *ptr point to element before the deleted element
temp=front;

 if(front==NULL && rear==NULL)											//   list is empty
	 printf("Double Ended Queue is already Empty");
 else
     {
	if(front==rear)						 //   List has only one element
	 {
	   x=temp->info;
	   front=NULL;
	   rear=NULL;
	 }
	else
	 {
	   while(temp->next!=NULL)
	    {
	      ptr=temp;
	      temp=temp->next;
	    }

	   x=temp->info;
	   ptr->next=NULL;
	   rear=ptr;
       }
       freenode(temp);
       printf("Element  %d successfully deleted",x);
	}
 }

void display()
{
struct node *temp;

if(empty())
  printf("\n Queue is empty");
else
  {
	temp=front;
	while(temp!=NULL)
	  {
	     printf("-> %d ",temp->info);
	     temp=temp->next;
	  }

  }
}

void main()
{
int x, i, ch,ans;
init();


do
{
// clrscr();
printf("\n -----Operation on Double Ended Queue----");
printf("\n1. Insert/Enqueue at front");
printf("\n2. Insert/Enqueue at Rear");
printf("\n3. Delete/ Dequeue at front");
printf("\n4. Delete/ Dequeue at Rear");
printf("\n5. Display ");
printf("\n6. Quit");
printf("\n Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("\n Enter the value to be inserted at front end:");
			scanf("%d",&x);
			enqueue_front(x);
			break;
case 2: printf("\n Enter the value to be inserted at rear end:");
			scanf("%d",&x);
			enqueue_rear(x);
			break;

case 3:dequeue_front();break;

case 4: dequeue_rear();break;

case 5:display();break;
case 6: exit(1);break;
default: printf("\n Wrong Choice");break;
}

printf("\nDo you want to continue? (Press 1=yes, 0=no)");
scanf("%d",&ans);
}while(ans==1);
}

