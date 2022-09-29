#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};


struct node * create(int data){
	struct node* n;
	n= (struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	printf("%d",n->data);
	return n;
}
int main(){
	// Constructing node using funtion
	struct node * p = create(23);
	
	
		
	return 0;
}