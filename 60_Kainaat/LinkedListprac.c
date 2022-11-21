#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head =0;
struct node *newnode , *temp;

int Insertatend(int num);
int Insertatbeg(int num);
int Insertatpos(int pos);
int Deleteatbeg();
int Deleteatend();
int Deleteatpos(int pos);
int Display();

int main() {
    
    int ch, num, pos;
    
    while(1){
        printf("-------Operations of Single Linked List-------\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at a Position\n");
        printf("3. Insert at the end\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at a Position\n");
        printf("6. Delete at the end\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1: printf("Enter the number you want to Insert: ");
                    scanf("%d" , &num);
                    Insertatbeg(num);
                    break;
            case 2: printf("Enter the Position you want to enter:");
                    scanf("%d" , &pos);
                    Insertatpos(pos);
                    break;
            case 3: printf("Enter the number you want to Insert: ");
                    scanf("%d" , &num);
                    Insertatend(num);
                    break;
            case 4: Deleteatbeg();
                    break;
            case 5: printf("Enter the Position you want to delete: \n");
                    scanf("%d" , &pos);
                    Deleteatpos(pos);
                    break;
            case 6: Deleteatend();
                    break;
            case 7: Display();
                    break;
            case 8: exit(0);
                    break;
            default: printf("Invalid Choice!");
                    break;
            
        }
    }
   
    return 0;
}
int Insertatbeg(int num){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = num;
    if(head == 0){
        head = temp = newnode;
    } else {
        newnode -> link = head;
        head = newnode;
    }
}
int Insertatpos(int pos){
    struct node *current;
    int data, i = 0;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert: ");
    scanf("%d" , &data);
    newnode -> data = data;
    current = head;
    while(i < pos-2){
        current = current -> link;
        i++;
    }
    newnode -> link = current -> link;
    current -> link  = newnode;
 
}

int Insertatend(int num){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = num;
    if(head == 0){
        head = temp = newnode;
    } else {
        temp -> link = newnode;
        temp = newnode;
    }
}
int Deleteatbeg(){
    struct node *current;
    current = head;
    head = head -> link;
    free(current);
}
int Deleteatend(){
    struct node *prevnode , *currentnode;
    currentnode = head;
    while(currentnode -> link != 0){
        prevnode = currentnode;
        currentnode = currentnode -> link;
    }if(currentnode == head){
        head = 0;
        free(currentnode);
    } else {
    prevnode -> link = 0;
    free(currentnode);
    }
}
int Deleteatpos(int pos){
    struct node *prevnode , *currentnode;
    int i =0;
    currentnode = head;
    while(i < pos - 1){
        prevnode = currentnode;
        currentnode = currentnode -> link;
        i++;
    }
    prevnode -> link = currentnode -> link;
    free(currentnode);
}
int Display(){
    struct node *traverse;
    traverse = head;
    printf("Your List is: ");
    while(traverse != 0){
        printf("%d\t" , traverse -> data);
        traverse = traverse -> link;
    }
    printf("\n");
}