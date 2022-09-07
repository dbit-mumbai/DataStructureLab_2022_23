#include<stdio>
#define size 5
int front =-1,rear =-1;
int a[size];

void Enqueue(){
	if(f==-1 && r==-1){
		int b;
		printf("Enter the element:")
		scanf("%d",&b);
		front = rear = 0;
		a[rear]=b;
	}
	else if(rear ==size-1){
		printf("Queue is Full!!!!");
	}	
	else
	{	
		printf("Enter the element:")
		scanf("%d",&b);
		rear = rear+1;
		a[rear]=a;
	}

}

void Dequeue(){
	if(f==-1 && r==-1){
	printf("Queue Is Empty");
	}
	else if(front==rear){
		front = rear = -1;
		printf("hello");
	

	}
	else
	{
		printf("The number You Deleted is %d",a[front]);
		front=front+1;		
	}


}

int main(){
	int t=0,n;
	printf("**************************************");
	printf("\tQueue Operations");
	printf("1) Enqueue\n2) Dequeue\n3) Show Queue\n4) Exit");
	printf("Enter Your Choice:");
	scanf("%d",&n);
	while(t!=1)
	{
		switch(n){
		case 1 :Queue();
			break;
		case 2 ://Dequeue();
			break;
		case 3 :
			break;
		case 4 :
			t=1;
			break;
		default : 
			printf("You Entered a Wrong Choice\n");
			break;
		}
	}
}
