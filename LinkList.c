#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;                //stores Data
	struct node * next;   //Stores address
};

struct node * head;

void insert(int x){
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	
	temp->data = x;
	temp->next = head;
	head=temp;
}

void print(){
	struct node * temp = head;
	printf("List is :");
	
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp-> next;
	}
	printf("\n");
}

int main(){
	int n,i,e=1,ch;
	head=NULL;
	printf("*********************LinkList Operation****************\n");
	while(e!=0){
		printf("1)Insert An Element\n2)Insert From Top\n3) Insert From Bottom\n");
		printf("Enter Your Choice:");
		scanf("%d",&ch);
		switch(ch){
		case 1: printf("How Many Number You want to Insert:");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				int x;
				printf("Enter The Number :");
				scanf("%d",&x);
				insert(x);
				print();
			}
			break;
		case 2:
			break;
		case 3: e=0;
			break;
		default:printf("\nYou Entered A Wrong Choice!!");
	}
	}
}
