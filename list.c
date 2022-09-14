#include<stdio.h>
#include<stdlib.h>
//#define size 5
struct node 
{
    int info;//value inside a node
    struct node*next;//address point
};
struct node*list=0;//start of the list

struct node*getnode(void)//
{
    return(structnode*)malloc(size of(struct node));
}

void freenode(struct node*p)
{
    free(p);
}

void insertnode(int x)
{
    struct node*newnode;
    newnode=getnode();
    newnode-info=x;
    newnode->next=list;//doubt
    list=newnode;//before
    display();
}

void insertend(int x)
{   struct node*temp;
    struct node*newnode;
    newnode=getnode();
    newnode->info=x;
    newnode->next=NULL;
    temp=list;
//to check list empty or not
if(temp==NULL)
list=newnode;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    } 
    display();
}

