#include<stdio.h>
#include<stdlib.h>
int i,n;
int front=-1;
int rear=-1;
int a[5];
void enqueue(int n);
int dequeue();
void display();
int search(int n);
int main(){
    int choice;
    while(1)
    {
    printf("\n----Stack Operation---");
	printf("\n1. enqueue an element into the stack");
	printf("\n2. dequeue an element from the stack");
	printf("\n3. Display the stack elements");
	printf("\n4. Search");
	printf("\n5. Exit");


	printf("\n Enter your choice:");
	 scanf("%d",&choice);
    
        switch (choice)
        {
           
            case 1: scanf("%d",&n);
                    enqueue(n);
                     break;
            case 2: dequeue();
                     break;
            case 3: display();
                     break;
            case 4: scanf("%d",&n);
                    search(n);
                     break;
            case 5:exit(1);
                     break;
            default: printf("wrong choice");
        }
    }
}

void enqueue(int n)
{
    if(front==-1&&rear==-1)
    {
         front++;
         rear++;
         a[rear]=n;
    }
   else if(rear==4){
       printf("queue if full");
      }

    else{
    rear++;
    a[rear]=n;
    }
}

int dequeue()
{
   if(front>rear)
   {
       printf("queue is empty");
   }
    else{
        front++;
    }
}
void display()
{
    if(front==-1&&rear==-1||front>rear)
    {
        printf("queue is empty");
    }
    else{
    for(i=front;i<=rear;i++)
         {
            printf("%d",a[i]);
         }
    }
}
int search(int n){
    if(rear>front){
        for(i=front;i<=rear;i++){
            if(a[i]==n)
            {
                printf("element found at position %d",i+1);
            }

        }
    }else
            {
                printf("element not found");
            }
    
}


