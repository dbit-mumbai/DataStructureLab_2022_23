#include<stdio.h>

int f=-1,r=-1,a[5];

void Dequeue();
void Enqueue();
void Show();

void main(){
	int b,d=0;
	while(d!=1){
		printf("\n----Queue Operations----");
		printf("\n1) Dequeue");
		printf("\n2) Enqueue");
		printf("\n3) Show the Queue");
		printf("\n4) Exit");
		
		printf("Enter Your Choice :");
		scanf("%d",&b);
		
		switch(b){
			case 1 : Dequeue();
				break;
			case 2 : Enqueue();
			break;
			case 3: Show();
				break;
		//	case 4: d=1;
		//	break;
			default : printf("You Entered A Wrong Choice");
				break;
		}
	}
}
void Enqueue(){
	int n;
	if(r== 5-1)	
	{
		printf("Queue Is Full");
	}
	else 
	{
		printf("Enter The Element You Want To Store:");
		scanf("%d",&n);
		r++;
		a[r]=n;
		printf("Your Enterey is recorded %d",a[r]);
		printf("%d",r);
	}
} 
void Show(){
	int i;
	printf("%d",r);
	for(i=f+1;i<=r;i++){
	printf("\n %d",a[i]);	
	}
}
void Dequeue(){
	int i;
	if(f==r){
		printf("Queue Is Empty");
	}
	else
	{
		for(i=0;i<=f;i++)
		printf("The element You Deleted Is :%d",&a[i]);
		f=f+1;
	}
	
	
}