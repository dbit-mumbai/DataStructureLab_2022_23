#include<stdio.h>
#include<stdlib.h>

# define size 5

int stk[size], top = -1;

void push();
void pop();
void search();
void display();

int main()
{
    int ch;
     
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
                push();
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
            break;

            default:
                printf("\nEnter a Valid Choice: ");
            
        }
    }
}

void push()
{
    int x;

    if(top == size - 1)
        printf("\nStack Overflow");
    else
    {
        printf("\nEnter the element to be Pushed: ");
        scanf("%d", &x);

        top++;
        stk[top] = x;
    }
}

void pop()
{
    if (top < 0)
        printf("\nStack Overflow");
    else 
    {
        printf("\nPopped Element %d", stk[top]);

        top--;
    }
}

void display()
{
    for(int i = top; i >= 0; i--)
        printf("\n%d ", stk[i]);
}

void search()
{
    int count=0, choice;
    if (top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("\nEnter Element to be Searched: ");
        scanf("\n%d", &choice);

        for (int i = top; i >= 0; i--)
        {
            if (choice == stk[i]) //checks if the element accepted from the user is present in the stack
            {
                printf("\n%d found!", choice);
                count = 1;
                break;
            }                
        }
        if (count!=1)
        {
            printf("%d is not present in the Stack\n", choice);            
        }
        
    }

}