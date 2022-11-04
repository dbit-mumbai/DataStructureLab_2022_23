#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack
{
    int data;
    struct stack * next;
};

struct stack *getnode(void)
{
    return((struct stack*)malloc(sizeof(struct stack)));
}

void freenode(struct stack *p)
{
    free(p);
}

struct stack * top = NULL;

void push();
void pop();
void search();
void display();


int main()
{
    int n, ch;
     
    while(1)
    {
        printf("\nStack Operations: ");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Search");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter a Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                printf("\nEnter the Value: ");
                scanf("\n%d", &n);

                push(n);
            }
            break;

            case 2:
            {
                pop();
            }
            break;

            case 3:
            {
                search();
            }
            break;

            case 4:
            {
                display();
            }
            break;

            case 5:
            {
                exit(0);
            }

            default:
                printf("\nEnter a Valid Choice: ");
            
        }
    }
}

void push(int x)
{
    struct stack *newnode;
    
    newnode = getnode();
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}

void pop()
{
    if (top == NULL)
        printf("\nEmpty");
    else 
    {
        struct stack * temp;
        int x;

        temp = top;

        x = top -> data;

        printf("\n%d Popped", x);
        
        top = top -> next;
        freenode(temp);
    }
}

void search()
{
    //empty
}

void display()
{
    struct stack * temp;
    temp = top;

    printf("\nTop");
    while(temp != NULL)
    {
        printf("-> %d", temp -> data);
        temp = temp -> next;
    }
}




