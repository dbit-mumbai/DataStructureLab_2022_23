#include<stdio.h>
#include<stdlib.h>
#define size 5

int stack[size];
int j = -1;

void push(int);
void pop();
void show();
void isEmpty();

int main()
{
    int ch, n;
    do {
        printf("\n------Stack Menu-------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Show");
        printf("\n4. Check Empty");
        printf("\n5. Exit");

        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter a Number to push : ");
                scanf("%d", &n);
                push(n);break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice! Try Again!");
        }
    } while(1);
    return 0;
}

void push(int n)
{
    if (j == size-1)
    {
        printf("\nstack is full!");
    } else {
        j++;
        stack[j] = n;
    }
    return;
}

void pop()
{
    if(j == -1)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\npopped value : %d", stack[j--]);
    }
    return;
}

void show()
{
    for(int i = size-1; i >= 0 ; i--)
    {
        printf("\n%d", stack[i]);
    }
    return;
}

void isEmpty()
{
    if (j == -1)
    {
        printf("\nStack is Empty!");
    } else {
        printf("\nStack is not Empty!");
    }
}