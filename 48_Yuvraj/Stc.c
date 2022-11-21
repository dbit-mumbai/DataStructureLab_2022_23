#include<stdio.h>
#define size 5

int stack_arr[size];
int top = -1;

int main()
{
    int choice, data;
    while(1)
    {
        printf("----stack operations----\n");
        printf("1.insert the element into the stack\n");
        printf("2.delete the element from  the stack\n");
        printf("3.Display the element\n");
        printf("4.To searchthe element\n");
        printf("5.To reverse the stack\n");
        printf("6.exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the element to be insert:");
                    scanf("%d",&data);
                    push(data);
                    break;
            
            case 2: data = pop();
                    printf("Deleted element is: %d\n", data);
                    printf("\n");
                    break;

            case 3: display();
                    break;

            case 4: search();
                    break;

            case 5: Reverse_stack();
                    break;

            case 6: exit(1);

            default: printf("invalid choice\n");
                    break;
        }
    }

}

void push(int data)
{
    if(top==size-1)
    {
        printf("Stack is overflow\n");
        return;
    }
    else
    {
        top++;
        stack_arr[top] = data;
    }
}

int pop()
{
    int value;
    if(top == -1)
    {
        printf("Stack is underflow!!\n");
        return;
    }
    else{
        value = stack_arr[top];
        top--;
        return value;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("stack is underflow!!\n");
        return;
    }
    else{
        printf("Elemet in the stack are::\n");
        for(i = top; i>=0; i--)
        {
            printf("%d\n", stack_arr[i]);
        }
    }    
   printf("\n");
     
}

void search()
{
    int choice,i;
    int count = 0;

    if(top == -1)
    {
        printf("Stack is underflow!\n");
        return;
    }
    else{

        printf("Enter the element: ");
        scanf("%d",&choice);

        for(i=top; i>=0; i--)
        {
            if(choice == stack_arr[i])
            {
                printf("%d is present in the stack\n", choice );
                count = 1;
                break;
            }
        }

        if(count != 1)
        {
            printf(" %d is not present in the stack!!\n", choice);
            
        }
    } printf("\n");
}

void Reverse_stack(){
    int stack1[size];
    int a;
    int top1 = -1;
    
    while(top!=-1){
        a = stack_arr[top];
       // top1++;
        top--;
        top1++;
        stack1[top1] = a;
    }
    for(int i= top1; i>=0; i--){
        printf("%d\n",stack1[i]);
    }
}