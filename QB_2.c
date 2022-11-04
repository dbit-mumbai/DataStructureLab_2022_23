#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node 
{
    int data;
    struct node * next;
};

struct node *getnode(void)
{
    return ((struct node *)malloc (sizeof (struct node)));
};

void freenode (struct node * p)
{
    free(p);
}

struct node *start = NULL;

void insert_beg();
void del_beg();
void del_end();
void copy();
void display();

int main()
{
    int ch;

    do
    {
        printf("\n1. Insert at the Beginning");
        printf("\n2. Delete at the Beginning");
        printf("\n3. Delete at the End");
        printf("\n4. Copy List");
        printf("\n5. Display");

        printf("\nEnter Choice: ");
        scanf("\n%d", &ch);

        switch(ch)
        {
            case 1:
            {
                    
                insert_beg();
            }
            break;

            case 2:
            {
                del_beg();
            }
            break;

            case 3:
            {
                del_end();
            }
            break;

            case 4:
            {
                copy();
            }
            break;

            case 5:
            {
                display();
            }
            break;

            default: 
                    printf("\nEnter a Valid Choce");
        }

    } while (ch != 5);
    
}

void insert_beg()
{
    struct node *newnode;
    int x;

    printf("\nEnter Value:");
    scanf("\n%d", &x);

    newnode = getnode();
    newnode -> data = x;
    newnode -> next = start;
    start = newnode;

    display();
}

void del_beg()
{
    struct node *temp;
    int x, p;

    temp = start;

    if((temp == NULL) && (p != 1))
        printf("\nList is Empty");

    else 
    {
        x = temp -> data;
        start = temp -> next;

        freenode(temp);

        display();
    }

}

void del_end()
{
    struct node * ptr, *temp;
    int x;

    temp = start;

    if(temp == NULL)
        printf("\nList is Empty");

    else 
    {
        while((temp -> next) -> next != NULL)
        {
            temp = temp -> next;
        }

        ptr = temp -> next;

        if(ptr != NULL)
        {
            ptr -> data = x;
            free(ptr);

            temp -> next = NULL;

            display();
        }
    }
    
}

void copy()
{
    
    struct node *temp, *newnode, *start2 = NULL, *temp2;

	temp = start;
	temp2 = start2;

	if(temp == NULL)
		printf("\nThe List Empty");
	else
	{
		newnode = getnode();
		start2 = newnode;
		temp2 = newnode;

		while(temp != NULL)
		{
			temp2->data = temp->data;

			if(temp->next != NULL)
			{
				newnode = getnode();

				temp2->next = newnode;

				temp = temp->next;
				temp2 = temp2->next;
			}
			else
			{
				temp2->next = NULL;
				temp = temp->next;
			}

		}

		temp2 = start2;

		printf("\nThe List after Copying is: ");

		while(temp2 != NULL)
		{
			printf("\n%d", temp2->data);
			temp2 = temp2->next;
		}
	}
}

void display()
{
    struct node *temp;

	temp = start;

	if(temp == NULL)
		printf("\nList is Empty");
	else
	{
		printf("\nThe Elements in the List are:\n");

		while(temp != NULL)
		{
			printf("\n%d",temp -> data);
			temp = temp -> next;
		}
	}
}
