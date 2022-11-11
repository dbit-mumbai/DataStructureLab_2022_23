#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int s[n];
void push();
void pop();
void display();
void peek();

void main()
{
    int ch;
    
    while(1)
    {
    
    printf("----------**stack**----------");
    printf("1)push");
    printf("2)pop");
    printf("3)peek");
    printf("4)display");
    printf("5)exit");
    scanf("%d",&ch);
        switch(ch)
            {
            case 1:push();break;
            case 2:pop();break;
            case 3:peek();break;
            case 4:display();break;
            case 5:exit(0);break;
            default:printf("enter a correct option from 1 to 5");break;
            }
       
    }
}

void push()
{
    //enter a number =x
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(top==n-1)//if stack is full
        printf("cant add overflow");
    else
        {
            top++;
            x=s[top];//assigning value of x as s[0] iftop=-1
        }
}

void pop()
{
    int i;
    if(top==-1)
        printf("stack is empty");
    else
        {
            i=s[top];
            printf("%d",i);
            top++;
        }
}

void display()
{
    for(int j=0;j<n;j++)
    {
        printf("%d",s[j]);
    }
}

void peek(){
    int x;
    if(top==-1)
    {
       printf(" stack is empty");
    }
    else
    {  
        x=s[top];
        printf("%d",x);
    }
}