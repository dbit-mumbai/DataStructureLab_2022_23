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
void insert_pos();
void del_end();
void search();
void display();

int main()
{
    int ch;

    do
    {
        printf("\n1. Insert at the Beginning");
        printf("\n2. Insert at the Position");
        printf("\n3. Delete at the End");
        printf("\n4. Search");
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
                insert_pos();
            }
            break;

            case 3:
            {
                del_end();
            }
            break;        

            case 4:
            {
                search();
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
        printf("\nList is Empty");

    else if(p == 1)
        insert_beg();

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

void search()
{
    struct node * temp;
    int x, loc = 0;

    temp = start;

    if(temp == NULL)
        printf("\nList is Empty");

    else 
    {
        printf("\nEnter Value to be Seached: ");
        scanf("\n%d", &x);

        while(temp != NULL)
        {
            loc++;
            
            if(temp -> data == x)
            {
                printf("\nElement %d is found at %d", x, loc);
                break;
            }

            temp = temp -> next;
        }

        if(temp == NULL)
            printf("\nElement not found");
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
