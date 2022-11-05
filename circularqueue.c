#include<stdio.h>
#include<stdlib.h>
int a[5];
int i;
int n;
int front=-1;
int rear=-1;
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
         front=0;
         rear=0;
         a[rear]=n;
    }
   else if(front==((rear+1)%5)){
       printf("queue if full");
      }

    else{
        rear=(rear+1)%5;
        a[rear]=n;
        
    }
}

int dequeue()
{
   if(front==-1&&rear==-1)
   {
       printf("queue is empty");
   }
    else if(rear==front){
       front=-1;
       rear=-1;
    }else{
        front=(front+1)%5;    }
}
void display()
{
    int i=front;
   while(i!=rear)
   {
       printf("%d",a[i]);
       i=(i+1)%5;
   }
   printf("%d",a[rear]);
}
int search(int n){
   int i=front;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }else if(rear>front){
       for(i=front;i<=rear;i++){
           if(a[i]==n)
           {
               printf("element found at %d",i+1);
           }
           
           
       }
       i=(i+1)%5;
    }else{
        printf("element not found");
    }
    
    
}


