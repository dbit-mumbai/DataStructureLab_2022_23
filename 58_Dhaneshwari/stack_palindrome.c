//stack_palindrome
#include<stdio.h>
#include<string.h>
#define n 5
int stk[n],top=-1;
char pop()
{
    if(top==-1)
    {
      printf("stack isempty");
    }
    else
    {
        
       return stk[top];
       top--;
    }
}
void push(char x)
{
    if(top==n-1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stk[top] = x;
    }
}

int main()
{
    char input[n], revers[n];
    int len;
    printf("enter a number to check wheather it is a palindrome\n");
    scanf("%s",input);
    len=strlen(input);
    //INSERT INPUT STRING INTOTHE STACK
    for(int i=0;i<len;i++)
    {
        push(input[i]);
    }
    //POP THE ELEMENTS FROM THE STACK INTO THE REVERSE STRING
    for(int i=0;i<len;i++)
    {
        //pop(input[i]);
        revers[i]=pop();
       
    }
     
    for(int i=0; i<len/2;i++)
    {
        if(input[i]!=revers[len-i-1])
            printf("not a palindrome");
        else
            printf(" palindrome");
    }
   /* int flag=0;
    if(strcmp(input,revers)==flag)
    {printf("yes its a palindrome");}
    else
    {printf("no its not a palindrome");}*/
}