#include<stdio.h>
#include<stdlib.h>

void create(int);
void insertbeg(int);
void insertlast(int);
void insertbetween(int);

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void create(int item)
{

    struct node *ptr = (struct node*)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }
}

void insertbeg(int item)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

void insertlast(int item)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;

        }
    }
}

void insertbetween(int item)
{
    struct node *ptr = (struct node *) malloc (sizeof(struct node));
    struct node *temp;
    int i,loc;
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {

        printf("Enter the location");
        scanf("%d",&loc);
        ptr->data = item;
        temp=head;
        for(i=0; i<loc; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }

        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
    }

}

