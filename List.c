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
void Dis(){
	printf("The List is:\n");
	struct node *ptr; // Created A Reference Pointer
	ptr=head;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
// Insertion At The Beggining
void InsertB(){
	
}
// Insertion At The End Of The List
void InsertE(){
	struct node *ptr,*temp;
	int x;
	printf("Enter The NUmber:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	ptr=head;
	while(ptr!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
}
int main(){
    int x,ch=1;
    while(ch!=0){
    printf("********* Link List Operations ***********\n");
    printf("1) Insert From Beginning\n2) Insert From End ");
    printf("\n3) Display the List\n4) Exit");
    printf("\nEnter Your Choice:");
    scanf("%d",&x);
    switch(x){
       		case 1: 
       	  	 	    break;
       		case 2: InsertE();
         	  	     break;
        	case 3:Dis();
          	 	     break;
        	case 4: ch=0;
            	    break;
        	default: printf("You Entered a Wrong Choice!!!!");
    	}
    }
	}