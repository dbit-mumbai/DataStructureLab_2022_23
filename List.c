// Name :- Sumit Sawant
// Date :- 15/09/2022
// Program To Perform Simple Operations Of Link List


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



// To Create A Node
struct node{
    int data; // To store Data
    struct node* next;// To store Link
};
struct node* head;

// To Delete Element From End Of LinkList
void DeleteE(struct node *head){
	struct node *ptr;
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=NULL;
	printf("SuccessFull!!!!!\n");
	Dis();
}
// Delete An Element From Beginning Of Linked List
struct node* DeleteB(struct node* head){
	head=head->next;
}

// Insert An Element At a Certain Position
void InsertP(struct node *head,int data,int posi)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));// Creating A Temporary Node
	temp->data=data;
	temp->next=NULL;
	
	struct node* ptr;
	ptr = head;
	int i=1;
	posi--;
	while(i!=posi)// For Transversing
	{
		ptr=ptr->next;
		i++;
	}
	temp->next=ptr->next;
	ptr->next=temp;
	printf("Successfull!!!!\n");
	Dis();
	
}

// Display The Link List
void Dis(){
	int c=0;
	printf("The List is:\n");
	struct node *ptr; // Created A Reference Pointer
	ptr=head;
	while(ptr!=NULL){
			printf("%d\n",ptr->data);
		
		ptr=ptr->next;
		
	}
}

// Insertion At The Beggining
struct node * InsertB(struct node* head,int x){
	struct node *ptr,*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	
	head=temp;
	return head;
}

// Insertion At The End Of The List
void InsertE(struct node *head,int x){
	struct node *ptr,*temp;
	ptr=head;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
}

// Main Body Of Code
int main(){
	
	head =(struct node *)malloc(sizeof(struct node));
	head=NULL;
	
    int x,ch=1,b,p;
    
    while(ch!=0)
	{
    	printf("********* Link List Operations ***********\n\n");
    	printf("1) Insert From Beginning\n2) Insert From End ");
    	printf("\n3) Display the List\n4) Insert At Certain Position\n5) Delete From Beginning\n");
    	printf("6) Exit");
    	printf("\nEnter Your Choice:");
    	scanf("%d",&x);
    
		printf("\n\n\n");
    
		switch(x)
		{
       		case 1: 
			   		printf("Enter The NUmber:");
					scanf("%d",&b);
			   		
					head=InsertB(head,b);
					Dis(); 
       	  	 	    break;
       		case 2:
					printf("Enter The NUmber:");
					scanf("%d",&b);
			   		
					InsertE(head,b);
			   		Dis();
         	  	    break;
        	case 3: 
					Dis();
          	 	    break;
        	case 6: 
					ch=0;
            	    break;
        	case 4: 
        			printf("Enter The Position:");
        			scanf("%d",&p);
					
					printf("Enter The NUmber:");
					scanf("%d",&b);
			   		
					InsertP(head,b,p);
			   		Dis();
			   		break;
			case 5: 
					head=DeleteB(head);
					Dis();
					break;
			case 7:
					DeleteE(head);
					break;
        	
			default: printf("You Entered a Wrong Choice!!!!");
    	}
    }
}