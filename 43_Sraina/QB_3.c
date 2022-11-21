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

void insert_end();
void insert_pos();
void del_pos();
void rev();
void display();

int main()
{
    int ch;

    do
    {
        printf("\n1. Insert at the End");
        printf("\n2. Insert at the Location");
        printf("\n3. Delete at the Location");
        printf("\n4. Reverse List");
        printf("\n5. Display");

        printf("\nEnter Choice: ");
        scanf("\n%d", &ch);

        switch(ch)
        {
            case 1:
            {
                    
                insert_end();
            }
            break;

            case 2:
            {
                insert_pos();
            }
            break;

            case 3:
            {
                del_pos();
            }
            break;

            case 4:
            {
                rev();
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

void insert_end()
{
    struct node *newnode, *temp;
    int x;

    printf("\nEnter Value:");
    scanf("\n%d", &x);

    newnode = getnode();
    newnode -> data = x;
    newnode -> next = NULL;
    temp = start;

    if(temp == NULL)
        start = newnode;
    else
        {
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }

            temp -> next = newnode;
        }

    display();
}

void insert_pos()
{
    struct node *newnode, *temp;
    int x, i, p;

    do
    {
        printf("\nEnter Position: ");
        scanf("\n%d", &p);
    } while (p <= 0);

    temp = start;

    if((temp == NULL) && (p != 1))
        printf("\n List is Empty");
    else 
    {
        printf("\nEnter Value: ");
        scanf("\n%d", &x);

        for(i = 1; i < p - 1; i++) //p-2 jumps
        {
            if(temp -> next = NULL)
            {
                printf("\nInvalid Position as Location > Length of the List");
                break;
            }

            temp = temp -> next;
        }    

        if(i == p - 1)
        {
            newnode = getnode();
            newnode -> data = x;
            newnode -> next = temp -> next;
            temp -> next = newnode;

            display();
        }
    }
}

void del_pos()
{
    struct node * temp, * ptr;
    int p, x, i;

    temp = start;

    if (temp == NULL)
        printf("\nList is Empty");
    else 
    {
        printf("\nEnter Location: ");
        scanf("%d", &p);

        if(p == 1)
            temp = temp -> next;
        else
        {
            for(i = 1; i < p; i++)
            {
                if(temp -> next != NULL)
                {
                    printf("\nInvalid Position as Location > Length of the List");
                    break;
                }

                ptr = temp;
                temp = temp -> next;
            }
        }

        if(temp -> next != NULL)
        {
            printf("\nElement at %d successfully deleted", temp -> next);
            ptr -> next = temp -> next;

            freenode(temp);
        }

        display();
    }
}

void rev()
{
    struct node *temp, *start2=NULL, *newnode;

	temp=start;

	if(temp==NULL)
		printf("\nThe List Empty");
	else
	{
		while(temp != NULL)
		{
			newnode = getnode();
			newnode->data = temp->data;
			newnode->next = start2;
			start2 = newnode;

			temp = temp->next;
		}

		temp = start2;

		while(temp != NULL)
		{
			printf("\n%d", temp->data);
			temp = temp->next;
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
