/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#define size 5
int stack[size];

int main()
{
    int ch, num, item;
    int top = -1;
    while(1){
        printf("------------Stack Operations------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d" , &ch);
    
        switch(ch){
            case 1: printf("Enter the number of elements you want to push in stack:");
                    scanf("%d" , &num);
                    if(size -1 < num){
                        printf("Stack Overflow!\n");
                    } else {
                            printf("Enter the elements: \n");
                            top++;
                            scanf("%d", stack[top]);
                        }
                    break;
            case 2: if(top == -1){
                    printf("Stack Underflow!\n");
                    }else{
                        item = stack[top];
                        top--;
                        printf("%d" , item);
                    }
                    break;
            case 3: if(top == -1) {
                        printf("Stack Underflow!\n");
                    }else {
                        printf("%d" , stack[top]);
                    }
                    break;
            case 4: if(top == -1){
                        printf("Stack is Empty!\n");
                    }else {
                        for(int i = top; i <= 0 ; i--){
                            printf("%d\n" , stack[i]);
                        }
                    }
                    break;
            case 5: exit(0);
                    break;
            default: printf("Invalid Choice!");
            }
                
        }
    

    return 0;
}