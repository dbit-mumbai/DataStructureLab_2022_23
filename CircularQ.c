#include <stdio.h>
#include<conio.h>
#define size 5
int front=-1,rear=-1,queue[size]; // Global Variable
void Count(){
	int c=0,i=front;
	if(front==-1 && rear==-1)
	{
		printf("Count IS 0");
	}
	else
	{
	
		while(i != rear)
		{
			i= (i+1) %size;
			c++;
		}
		c++;
		printf("Count Is %d",c);
	}
}
void Show(){
	int i=front;
	if(front==-1 && rear == -1){
		printf("Queue is Empty");
	}
	else
	{
		printf("Queue is : \n ");
		while(i != rear)
		{
			printf("%d \n",queue[i]);
			i= (i+1) %size;
		}
		printf("%d\n",queue[rear]);
	}
}
void Enqueue(){// Funtion To Add Element
	int x;
	if(front ==-1 && rear == -1)
	{
		front= rear = 0;
		printf("Enter The Element you Want to Enter:");
		scanf("%d",&x);
		queue[rear]=x;
	}
	else if( (rear + 1)%size==front){
		printf("Queue Is Full\n");
	}
	else
	{
		rear = (rear + 1)%size ;
		printf("Enter The Element you Want to Enter:");
		scanf("%d",&x);
		queue[rear]=x;
	}
}
void Dequeue(){ // Funtion To delete Element
	if(front==-1 && rear == -1){
		
		
	}
	else if(front==rear){
		printf("The Dequeue Element is %d",queue[front]);
		front=rear=-1;
		
	}
	else 
	{
		printf("The Element you Deleted is %d",queue[front]);
		front=(front+1)%size;
	}
}
int main()
{
    int i=0,n;
    while(i==0)
	{
    	
    	printf("\n************ Queue Operations ***********************\n\n");
    	printf("1) Enqueue A Number\n2) Dequeue A Number\n3) Count Number Of Entries");
        printf("\n4) Show Queue\n5) Exit\n\n");
        printf("\nEnter Your choice : ");
        scanf("%d",&n);
        printf("\n");
      
        switch(n){
            case 1: // To add any Element 
                    Enqueue();
                    Show();
                    break;
            case 2: Dequeue();
            		Show();
                    break;
            case 3: Count();
                    break;
            case 4: Show();
                    break;
            case 5: i=1;
                    break;
            default : printf("You Entered wrong Choice");
        }
    }
}
