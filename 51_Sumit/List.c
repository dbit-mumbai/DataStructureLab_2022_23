// Name :- Sumit Sawant
// Date :- 15/09/2022
// Program To Perform Simple Operations Of Link List


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// To Create A Node
struct node{
    int data; // To store Data
    struct node * next;// To store Link
};
struct node* head;

// Display The Link List
void Dis(){
	int c=0;
	printf("The List is:\n");
	struct node *ptr; // Created A Reference Pointer
	ptr = head;
	while(ptr!=NULL){
			printf("%d\n",ptr->data);
		ptr=ptr->next;
		c++;
		
	}
}

// Reverse An Element 
void reverse(){

struct node * temp = NULL , * temp2 = NULL;
	while(head != NULL){
		temp2 = head ->next;
		head ->next = temp;
		temp = head;
		head = temp2;
	}
	head = temp;
	Dis();
}

// Serch An Element
void serch(){
	int x;
	struct node * ptr = NULL;
	ptr = head;
	printf("Enter The Element : ");
	scanf("%d",&x);
	while(ptr!=NULL){
		
		printf("%d",ptr->data);
		if(x==ptr->data)
		printf("<-- Element");
		ptr=ptr->next;
		printf("\n");
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


// To Delete Element From End Of LinkList
void DeleteE(struct node *head){
	struct node *ptr;
	ptr=head;
	
	while(ptr->next->next!=NULL){
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

// To Count The Elements in Link List
void Cnt(struct node *head){
	struct node* ptr;
	
	int c=0;
	ptr=NULL; // Created A Reference Pointer
	ptr=head;
	while(ptr!=NULL)
	{
		ptr=ptr->next;
		c++;	
	}
	printf("The Count is %d",c);
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
    	printf("6) Delete From End\n7) Count The Elements In List\n8) Search An Element\n9) Reverse\n");
    	printf("10) Exit\n");
    	printf("\nEnter Your Choice:");
    	scanf("%d",&x);
    
		printf("\n");
    
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
        	
        	case 4: 
        			printf("Enter The Position:");
        			scanf("%d",&p);
					
					printf("Enter The NUmber:");
					scanf("%d",&b);
			   		
					InsertP(head,b,p); // Inserting At Posiion
			   		Dis(); // Displaying The Output
			   		break;
			case 5: 
					head=DeleteB(head);// Delete from Beginning
					Dis();
					break;
			case 6:
					DeleteE(head);// Delete From End
					break;
        	case 7: 
					Cnt(head); // Count element in the list
        			break;
        	case 8: 
					serch();// Serch an Element
            	    break;
            case 9: 
            		reverse(); // Reversing the List
            		break;
            case 10:
            	    ch=0; // Exit
					break;		
			default: printf("You Entered a Wrong Choice!!!!");
    	}
    }
}