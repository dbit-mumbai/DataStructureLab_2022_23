#include<stdio.h>
#include<stdlib.h>
//defineing a node
struct node
{
    int info;
    struct node *next;
};
struct node *list=0;
struct node *getnode()
{
    return ((struct node*)malloc(sizeof (struct node)));
}
void freenode(struct node *a)
{
    free(a);
}
void insertbeg(int x)
{
    printf("enter the element to be inserted at the begining ");
    scanf("%d",&x);
    struct node  *newnode;
    newnode=getnode();
    newnode->info=x;
    newnode->next=list;//imp step
    list=newnode;//imp step 
    display();
}
void insertlast(int x)
{   
    int temp;
    printf("enter the element to be inserted at the end ");
    scanf("%d",&x);
     struct node *newnode;
    newnode->info=x;
    newnode->next=NULL;//imp step
    list=newnode;
    display();
}
void insertposition(int p)
{
    int count=0,x;
    printf("enter the element to be inserted at the position p");
    scanf("%d",&p);
    struct node *newnode;
    struct node *temp;
    temp=list;
    newnode=getnode();
    newnode->info=x;
    newnode->next=list;
       while(count<p)
       {
        temp=temp->next;
        count++;
       }
       temp->next=newnode;
       display();
}
void display()
{
    struct node *temp;
    temp=list;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp=temp->next;
    }
    }
}
int main()
{
	int n, choice;
	while(1)
	{
		printf("\nSelect a function:");
		printf("\n1.Insert at begining	 \n2.Insert at end 	\n3.Insert at position	 \n4.Display     \n5.Exit");
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

			case 5: return 0;

			default: printf("\nInvalid choice!");
			
			}
		}
}