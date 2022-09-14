#include <stdio.h>
#define size 5
int front=-1,rear=-1,queue[size];
void Enqueue(){// Funtion To Add Element
	int x;
	if(front ==-1 && rear == -1)
	{
		front= rear = 0;
		printf("Enter The Element you Want to Enter:");
		scanf("%d",&x);
		queue[rear]=x;
	}
	else if( front==0 && rear == size - 1){
		printf("Queue Is Full\n");
	}
	else if( rear == size){
		rear = 0;
		printf("Enter The Element you Want to Enter:");
		scanf("%d",&x);
		queue[rear]=x;	
	}
	else
	{
		rear = rear + 1 ;
		printf("Enter The Element you Want to Enter:");
		scanf("%d",&x);
		queue[rear]=x;
		
	}
}
void Dequeue(){ // Funtion To delete Element
	if(front==-1 && rear == -1){
		printf("Queue Is Empty");
	}
	else if(front==rear + 1){
		printf("Queue Is Empty");
		front=rear=-1;
		
	}
	else if(front==size){
		front == 0;
		printf("The Element you Deleted is %d",queue[front]);
		front=front+1;
	}
	else 
	{
		printf("The Element you Deleted is %d",queue[front]);
		front=front+1;
	}
}
void main()
{
    int i=0,n;
    while(i==0)
	{
    	
    	printf("************ Queue Operations ***********************\n\n");
    	printf("1) Enqueue A Number\n2) Dequeue A Number\n3) Count Number Of Entries");
        printf("\n4) Show Queue\n5) Exit\n\n");
        printf("\nEnter Your choice : ");
        scanf("%d",&n);
        printf("\n");
      
        switch(n){
            case 1: // To add any Element 
                    Enqueue();
                    break;
            case 2: Dequeue();
                    break;
            case 3: //Count();
                    break;
            case 4: //Show();
                    break;
            case 5: i=1;
                    break;
            default : printf("You Entered wrong Choice");
                    break;
        }
    }
}
