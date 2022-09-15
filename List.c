#include<stdio.h>
#include<stdlib.h>
// To Create A Node
struct node{
    int data;
    struct node* next;
};
struct node* head;
void Dis(){
	printf("The List is:\n");
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void InsertB(){
	
}
void IE(){
	struct node *ptr;
	int x;
	printf("Enter The NUmber:");
	scanf("%d",&x);
	ptr = NULL;
	ptr=head;
	while(ptr!=NULL){
		ptr=ptr->next;
	}
	
	
	
}
int main(){

	}