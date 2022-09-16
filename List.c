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


void InsertP(struct node *head,int data,int posi){
	int i;
	struct node *ptr;
	ptr=head;
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	for(i=0;i<posi;i++){
		ptr=ptr->next;
		printf("%d",ptr->data);
	}
	temp->next=ptr->next;
	ptr->next=temp;
}
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
int main(){
	head =(struct node *)malloc(sizeof(struct node));
	head=NULL;
    int x,ch=1,b,p;
    while(ch!=0){
    printf("********* Link List Operations ***********\n");
    printf("1) Insert From Beginning\n2) Insert From End ");
    printf("\n3) Display the List\n4) Exit");
    printf("\nEnter Your Choice:");
    scanf("%d",&x);
    switch(x){
       		case 1: printf("Enter The NUmber:");
					scanf("%d",&b);
			   		head=InsertB(head,b); 
       	  	 	    break;
       		case 2:
					printf("Enter The NUmber:");
					scanf("%d",&b);
			   		InsertE(head,b);
         	  	     break;
        	case 3:Dis();
          	 	     break;
        	case 4: ch=0;
            	    break;
        	case 5: 
        			printf("Enter The Position:");
        			scanf("%d",&p);// For Taking The Position To Enter
					printf("Enter The NUmber:");
					scanf("%d",&b);// For Taking Data
			   		InsertP(head,b,p);
        	default: printf("You Entered a Wrong Choice!!!!");
    	}
    }
}