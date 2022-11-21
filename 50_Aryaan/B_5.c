// Write a menu driven program to perform the following operations in a Stack to 
  //  1.Push    2.Pop   3.Display   4.Peek 


#include <stdio.h>
#define size 5 //setting stack size

int stack[size], top=-1; //declaring array, top and functions
void push();
void pop();
void display();
void peek();

int main()
{
    int ch;

    while(1) //to loop the program
    {   //printing a menu
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Push element \n2.Pop element \n3.Display Stack \n4.Peek \n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch); 
 
        switch (ch)
        {
            case 1: push();
                    break;
        
            case 2: pop();
                    break;        
            
            case 3: display();
                    break;        
            
            case 4: peek();
                    break;        
            
            case 5: exit(1);
        
            default:printf("\nInvalid choice!\n");
            break;
        }

    }

}

void push()
{
    int choice;
    if (top==size-1) //checks if the stack is full
    {
        printf("Overflow!\n");
    }
    else
    {
        printf("\nEnter the element to be pushed into the stack : ");
        scanf("%d", &choice);
        top++; //increments top
        stack[top]=choice; //adds element in the stack
    }    

}

void pop()
{
    if (top==-1) //checks if stack is empty
    {
        printf("Underflow!\n");
    }
    else
    {
        printf("\nPopped %d from the stack.\n", stack[top]);
        top--; //decrements top
    }
    
}


void display()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        for (int i = top; i >= 0; i--) //prints the stack
        {
            printf("%d\n",stack[i]);            
        }
        
    }
    
}
void peek()
{
  printf("%d\n",stack[top]);
}
