/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int rear = -1 , front = -1;
int enqueue(int data);
int dequeue();
int display();

int main() {
    int queue[size];
    
   while(1){
       int ch;
       printf("------------Operation of Queue--------------\n");
       printf("1. Enqueue\n");
       printf("2. Dequeue\n");
       printf("3. Display\n");
       printf("4. Exit\n");
       printf("Enter Your Choice : ");
       scanf("%d" , &ch);
       
       switch(ch){
           int data;
           case 1: printf("Enter a number : ");
           scanf("%d" , &data);
           enqueue(data);
           break;
           case 2:dequeue();
                break;
           case 3: display();
                break;
           case 4: exit(0);
                break;
           default: printf("Invalid Choice!");
       }
   }
    
    return 0;
}
int enqueue(int data){
    if(rear == size - 1){
        printf("Queue is Full!\n");
    }
    if(rear == -1 && front == -1){
        rear = 0 , front = 0;
        queue[rear] = data;
    } else {
        rear++;
        queue[rear] = data;
    }
}
int dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is Empty");
    } if(front == rear ){
        front = -1 , rear = -1;
    } else {
        int item;
        item = queue[front];
        printf("%d\n" , item);
        front++;
        
    }
}
int display(){
    for(int i = front; i <= rear ; i++){
        printf("%d\t" , queue[i]);
    }printf("\n");
}