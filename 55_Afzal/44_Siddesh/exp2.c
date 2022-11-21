// Author :- Siddesh.b.patil , Roll no :- 44
#include<stdio.h>
#include<stdlib.h>
#define max 5      

int top,a[max];

void push(void)
{
         int x;
         if(top==max-1)    
         {
                 printf("Stack Overflow\n");
                 return;
         }
                                                        
         printf("Enter a no.\n");
         scanf("%d",&x);
top++;
         a[top]=x;    //increment the top and inserting element
         printf("%d succ. pushed\n",x);          
         return;
}

void pop(void)
{
         int y;
         if(top==-1)                                                            
         {
                 printf("stack underflow\n");
                 return;
         }
         y=a[top];
         //a[top--]=0; 
         top--;                                     
         printf("%d succ.poped\n",y);
         return;
}

void display(void)
{
         int i;
        
         if(top==-1)
         {
                printf("stack is empty\n");
                return;
         }
         printf("elements of Stack are :\n");
         for(i=top;i>=0;i--)
         {
                 printf("%d\n",a[i]);
          }
          return;
}

void peek (void)
{
    printf("Topmost element is %d\n",a[top]);
}

int main (void)
{
          int c;  top=-1;

          do
          {
                   printf("1:push\n2:pop\n3:display\n4:peek\n5:exit\nEnter Choice: ");
                   scanf("%d",&c);
                   switch(c)
                  {
                              case 1:push();
                              break;
                              case 2:pop();
                              break;
                              case 3:display();
                              break;
                              case 4:peek();
                              break;
                              case 5:printf("Exit\n");
                              break;
                              default :printf("Wrong Choice\n");
                              break;
                   }
          }while(c!=5); 
}

