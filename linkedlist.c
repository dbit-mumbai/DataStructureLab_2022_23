#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
}*head;

int i;

void creatlinkedlist();
void insertlinkedlist();
void deletelinkedlist();
void displaylinkedlist();

int main()
{
    creatlinkedlist();
    return 0;
}

void creatlinkedlist()
{
    int data,n;
    struct node *temp,*newnode;
    printf("Enter how many element you want to add in the linked list : \n");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("unable to create linked list\n");
    }
    else
    {
        printf("enter the element at node 1 : \n");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
        printf("Node 1 is inserted");
    }
    for(i=2;i<=n;i++)
    {
        printf("Enter the element %d : \n",i);
        scanf("%d\n",&data);
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("ERROR!!");
        }
        else
        {
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;
            printf("Node %d inserted!",i);
        }
    }
}
