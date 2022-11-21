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
void deleteBeg();
void deleteEnd();
void deletePosition();
void reverse();
void display();
void search();
void copy();
void deleteAtEnd();
void delete(int pos);


int main()
{
	int n, x, pos, choice;
	while(1)
	{
		printf("\nSelect a function:");
		printf("\n1.Insert at begining	 \n2.Insert at end 	\n3.Insert at position \n4.Delete at the begining  \n5.Delete at end  \n6.Delete at position   \n7.Reverse the linkedlist \n8.Search in linkedlist  \n9.Display  \n10.Exit");
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

			case 4: deleteBeg();
					break;

			case 5: deleteAtEnd();
					break;

			case 6:  printf("\nEnter the position to be deleted : ");
				scanf("%d",&pos);
				delete(pos);
				break;

			case 7: reverse();
				break;	

			case 8: printf("\n Enter the node value:");
				 	scanf("\n %d",&x);
					 search(x);
					 break;


			case 9: display();
					break;

			case 10: exit(1);

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
		while(count<p)
		{
			temp=temp->next;
			count++;
		}
		newnode->next=temp->next;
		temp->next = newnode;
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
	struct node *temp;
	temp = list;
	list = list->next;
	free(temp);
}

// delete node at list end
void deleteAtEnd()
{
	if(list == NULL)
	{
		printf("List is Empty!\n");
		return;
	}
	else
	{
	
		struct node *temp = list, *prev = NULL;
		while(temp->next!=NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
	}
}

void deleteEnd()
{
	struct node *prevnode , *temp;
	temp = list;
	while(temp -> next != NULL);
	{
		prevnode = temp;
		temp = temp ->next;

	}
	if (temp == list)
	{
		list = NULL;
	}
	else
	{
		prevnode ->next = NULL;
	}
		free(temp);
 
} 

/* delete at position */
void delete(int pos)
{
	if(list == NULL)
	{
		printf("List is Empty!\n");
	}
	else
	{
		struct node *temp1 = list;
		if(pos == 1)
		{
			list = list->next;
			freenode(temp1);
			return;
		}
		else
		{
			struct node *temp2;
			temp2 = list;
			int count;
			count = 1;
			while(temp1->next!=NULL)
			{
				if(count == pos-1)
				{
					temp2=temp2->next;
					temp1->next = temp2->next;
				}
				count++;
				temp1=temp1->next;
				temp2=temp2->next;
			}
			if(count < pos)
			{
				printf("There are less elements!\n");
			}
		}
	}
}

void deletePosition()
{
	    struct node *nextnode, *temp;
		int pos, i = 1;
		list = temp;
		while (i<pos-1)
		{
			temp = temp->next;
			i++;
		}
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);	
}

void reverse()
{
    struct node* prev = NULL;
    struct node* current = list;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    list = prev;
	display();
}

void search(int x)
{
int i;
struct node * temp;
temp=list;
if(list==NULL)
    printf("List is Empty");
else
{
 i=1;
 while (temp->next!=NULL)
 {
    if (temp->info==x)
     {
      printf("Position of Element %d is %d",x,i);
     break;
     }
    temp=temp->next;
    i++;

 }
if(temp->next==NULL && temp->info==x)
printf (" Position of Element %d is %d", x, i);
if(temp->next==NULL && temp->info!=x)
  printf("\n Element Not Found");


}
}