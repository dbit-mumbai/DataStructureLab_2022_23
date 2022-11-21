#include <stdio.h>
#include<stdlib.h>

#define n 5

int stack[n];
int top = -1;

/*void Push(int x);
void Pop();
void Display();
void Reverse_stack();*/

void Push(int x)
{
    if(top == n-1)
    {
        printf("Stack OVERFLOW\n");
    }
    else
    {
        printf("Enter an element:");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
}

void Pop()
{
    int y ;
    if(top == -1)
        printf("Stack UNDERFLOW\n");
    else
    {
        y = stack[top];
        top--;
        printf("Deleted element is %d\n",y);
    }
}

void Display()
{
    for(int i=top; i>= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
}

void Peek()
{
    printf("%d\n",stack[top]);
}

void Reverse_stack()
{
    int stack1[n];
    int a;
    int top1 = -1;
    
    while(top!=-1)
    {
        a = stack[top];
       // top1++;
        top--;
        top1++;
        stack1[top1] = a;
    }
    for(int y= top1; y>=0; y--)
    {
        printf("%d\n",stack1[y]);
    }
}
void Search()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int num;
        int count = 0;
        printf("Enter the number to be searched:");
        scanf("%d",&num);
       for(int i=0;i<=top;i++)
       {
            if(num == stack[i])
            {
                printf("%d element is at %d position \n",num,i);
            count = 1;
            }
        }
        if(count != 1)
            printf("%d element is not present in the stack\n",num);
    }
    
}
void main()
{
    int choice;
    int x;
    while(choice)
    {
    printf("\nEnter your choice :\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Peek\n5.Reverse Stack\n6.Search\n7.Exit\n");
    scanf("%d",&choice);
    
        switch(choice)
        {
            case 1 : Push(x);
            break;
            case 2 : Pop();
            break;
            case 3 : Display();
            break;
            case 4 : Peek();
            break;
            case 5 : Reverse_stack();
            break;
            case 6 : Search();
            break;
            case 7 : exit(0);
            break;
            default : printf("Invalid choice\n");
            break;
        }
        
        
    }
    
        
}
        


