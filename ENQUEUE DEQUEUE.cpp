#include<stdio.h>
#define N 5
int queue [N];
int front =-1;
int rear =-1;
	
	void enqueue(int x)
	 {
		if(rear=N-1)
		{
			printf("Overflow");
			
		}
		 else if(front==-1&& rear==-1)
		 {
		 	front=rear=0;
		 	queue[rear]= x;
		 }
		  else{
		 	    rear++;
		 	    queue[rear] =x;
		 }
	 }
	 void dequeue()
	 {
		if (front==-1&&rear==-1)
		{
			printf("Underflow");
		}
		else if(front==rear){
			front=rear=-1;
			
		}
		else {
		
				front++;
		}
	 }
	int main()
		{
    int choice, n;

    /* while loop */
    while(1)
    {
        printf("\n----Queue_Menu-----");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.isEmpty");
        printf("\n4.Traverse");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        /* switch case starts here */
        switch(choice)
        {
            case 1: printf("Enter a integer : ");
            	    scanf("%d", &n);
                    enqueue(n);
                    break;
            case 2: dequeue();
                    break;
            default: printf("invalid choice");
     }
	}
}
	 
