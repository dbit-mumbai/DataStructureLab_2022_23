#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
};

struct node* getnode(void)
{
	return((struct node*)malloc(sizeof(struct node)));
}

void freenode(struct node *p)
{
	free(p);
}

struct node *list=NULL;

void insertBeg(int n);
void insertEnd(int n);
void insertPosition(int n);
void display();
void deleteBeg();
void deleteEnd();

int main()
{
	int n, choice;
	while(1)
	{
		printf("\nSelect a function:");
		printf("\n1.Insert at beginning	 \n2.Insert at end 	\n3.Insert at position	 \n4.Display");
		printf("\n5.Delete at beginning		\n6.Delete at end		\n7.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("\nEnter element to be added : ");
				scanf("%d",&n);
				insertBeg(n);
				break;

			case 2: printf("\nEnter element to be added : ");
				scanf("%d",&n);
				insertEnd(n);
				break;

			case 3: printf("\nEnter element to be added : ");
				scanf("%d",&n);
				insertPosition(n);
				break;

			case 4: display();
				break;

			case 5: deleteBeg();
				break;

			case 6: deleteEnd();
				break;

			case 7: return 0;

			default: printf("\nInvalid choice!");
			
			}
		}
}

void insertBeg(int n)
{
	struct node *newnode;
	newnode=getnode();
	newnode->info=n;
	newnode->next=list;
	list=newnode;
}

void insertEnd(int n)
{
	struct node *newnode, *temp;
	newnode=getnode();
	newnode->info=n;
	newnode->next=NULL;
	temp=list;
	if(list==NULL)
	{
		list=newnode;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void insertPosition(int n)
{
	int p, count=1;
	printf("Enter the position :");
	scanf("%d",&p);
	struct node *newnode, *temp;
	newnode=getnode();
	newnode->info=n;
	newnode->next=list;
	temp=list;
	if(list==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		while(count>p)
		{
			temp=temp->next;
			count++;
		}
		temp->next=newnode;
	}
}

void display()
{
	struct node *temp;
	temp=list;
	if(list==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n%d", temp->info);
			temp=temp->next;
		}
	}
}

void deleteBeg()
{	
	struct node *newnode;
	newnode=list;
	if (list==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		list=newnode->next;
		freenode(newnode);
	}
	
}

void deleteEnd()
{	
	struct node *newnode, *temp;
	newnode=list;
	temp=list;

	if (list==NULL)
	{
		printf("\nList is empty");
	}

	else
	{
		while (newnode->next!=NULL)
		{
			temp=newnode;
			newnode=newnode->next;
		}
		temp->next=NULL;
		freenode(newnode);
		
	}
	
}
