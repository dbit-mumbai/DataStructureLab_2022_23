#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
head = NULL;

int main(){
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;
}
