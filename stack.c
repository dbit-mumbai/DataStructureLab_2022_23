// Author 1 :- name : Yuvraj rathod , branch:I.T
// Author 2 :- name :Siddesh patil , branch : I.T
#include<stdio.h>
#define size 7

struct stack
{
int arr[size];
int top;
};
typedef struct stack STACK;
STACK S;

void main()
{
    int choice;
    int option = 1;
    S.top = -1;

    printf("STACK  OPRATIONS\n");
    while (option)
    {
        printf("1. FOR PUSH\n");
        printf("2. FOR POP\n");

        printf("3. FOR DISPLAY\n");
        printf("4. FOR EXIT\n");

        printf("Enter Your Choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return;
                    break;
            default: printf("invalid choice");
                    break;       
        }


    
    }
    

}

void push(int x)
{
    //int arr[size];
    if(S.top == size-1 ){
        printf("stack overflow\n");
        return;
    }
    else{
        printf("Enter Element To The Stack:");
        scanf("%d",&x);
        S.top++;
        S.arr[S.top] = x;
    }
    return;
}
void pop(int x)
{
    if(S.top == -1){
        printf("no elements to pop");
    }
    else{
        x =  S.arr[S.top];
        printf("pop elements are = %d\n",x);
        S.top--;
    }
    return(x);
}
void display()
{
    int i;
    if(S.top == -1){
        printf("Stack is empty");
        return;
    }
    else{
        printf("\n The state of stack \n");
        for(i = S.top; i >= 0; i-- ){
            printf("%d\n",S.arr[i]);
        }
    }
    printf("\n");
}
   