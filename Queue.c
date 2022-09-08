# include<stdio.h>
# define size 5
int front = -1,rear = -1;
int queue[size];
void enqueue()
	{
		int x;
    	if(front ==-1 && rear ==-1)
		{
        	front = rear = 0;
        	printf("Enter the number :");
        	scanf("%d",&x);
        	queue[rear]=x;
        	printf("You entered %d\n",queue[rear]);
    	}
    	else if(rear == size - 1 )
		{
    		printf("Queue is Full\n");
		}
		else
		{
    		rear = rear + 1;
    		printf("Enter the number :");
        	scanf("%d",&x);
        	queue[rear]= x;
       		printf("You entered %d\n",queue[rear]);
    	}
	}
void Dequeue()
	{
		if((front==-1 && rear == -1) || front == rear + 1 )
		{
			front=rear=-1;
			printf("Queue Is Empty\n");
		}
		else
		{
			printf("The Element You Deleted is %d\n",queue[front]);
			front= front + 1;
		}
	}

void Show()
	{
		int x=front;
		if( ( front == -1 && rear == -1) || (front == rear && rear != 0 ) )
		{
	 		printf("Queue Is Empty\n");
		}
	 	else 
		{
	
			while(x != rear + 1)
			{
				printf("%d",queue[x]);
 				
				if(x==front)
					printf("<--- front");
				if(x==rear)
					printf("<--- Rear");
					
				printf("\n");
		
				x= x + 1;
			}
		}
	}


void Count()
{
	int count = 0,x = front;
	while(x != rear+1)
	{
		count=count+1;
		x=x+1;
	}
		printf("The Number Of Enteries Are %d\n",count);
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
            case 1: 
                    enqueue();
                    break;
            case 2: Dequeue();
                    break;
            case 3: Count();
                    break;
            case 4: Show();
                    break;
            case 5: i=1;
                    break;
            default : printf("You Entered wrong Choice");
                    break;
        }
    }
}
