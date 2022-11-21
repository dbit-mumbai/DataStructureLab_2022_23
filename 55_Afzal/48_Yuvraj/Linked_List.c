#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head = NULL;

struct node* getnode()
{
    return ((struct node*) malloc(sizeof(struct node)));
}

struct node freenode(struct node *p)
{
    free(p);
}

void addbeg(int x){

    struct node *nn;
    nn = getnode();
    nn->data = x;
    nn->next = head;
    head = nn;


}

void addend(int x)
{
    struct node *temp, *nn;
    nn = getnode();
    nn->data = x;
    nn->next = NULL;
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
        
    }
    temp->next = nn;

}

void addpos(int pos, int x)
{
   if(head == NULL)
   {
        printf("list is empty");
   }
   else
   {
       struct node *nn , *temp;
       int count = 1;
       temp = head;

       while(temp->next != NULL)
       {
            if(count  == pos-1){
                nn = getnode();
                nn->data = x;
                nn->next = temp->next;
                temp->next = nn;
                break;
            }
            else{
                temp = temp -> next;
                count++;

            }
       }
   }
}

void delatbeg(){

    if(head == NULL){
        printf("list is  empty!!");
    }
    else{
    struct node *temp;
    temp = head;
    head = temp ->next;
    printf("delete element %d\n", temp->data); 
    freenode(temp);
      
    }
}

void delatend(){
     
    if(head== NULL){
        printf("list is empty!!");
        return;
    }
    else{

        struct node *temp, *prevtemp;
        temp = head;

        while(temp->next != NULL){

                prevtemp = temp;
                temp = temp->next;
        }
         printf("delete element %d\n", temp->data);
        prevtemp->next = NULL;
        freenode(temp);
         return ;

    }
}

void delatpos(int pos)
{
	if(head == NULL)
	{
		printf("List is Empty!\n");
	}
	else
	{
		struct node *temp1 = head;
		if(pos == 1)
		{
			head = head->next;
			freenode(temp1);
			return;
		}
		else
		{
			struct node *temp2;
			temp2 = head;
			int count;
			count = 1;
			while(temp1->next!=NULL)
			{
				if(count == pos-1)
				{
					temp2=temp2->next;
					temp1->next = temp2->next;
				}
				count++;
				temp1=temp1->next;
				temp2=temp2->next;
			}
			if(count < pos)
			{
				printf("There are less elements!\n");
			}
		}
	}
}

void search(int target)
{
	struct node *temp;
	temp = head;
	while(temp->next!=NULL)
	{
		if(temp->data == target)
		{
			printf("Found!\n");
			return;
		}
		temp = temp->next;
	}
	printf("Not Found!\n");
	return;
}

void reverse()
{
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        head = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}



void display()
{

	struct node *t;
	t = head;
	if(t == NULL)
	{
		printf("List is Empty!\n");
	}
	else
	{
		while(t!=NULL)
		{
			printf("%d ", t->data);
			t = t->next;
		}
	}
	printf("\n");
}



int main()
{
    int x, pos, choice,data;
    while(1)
    {   
        printf("----Linledlist operation----\n");
        printf("1.Insert at beg\n");
        printf("2.Insert at end\n");
        printf("3.Insert at pos\n");
        printf("4.delete from the beg\n ");
        printf("5.delete from the end\n");
        printf("6.delete from the pos\n");
        printf("7.Display\n");
        printf("8.search\n");
         printf("9.reverse\n");

        

        printf("Enter Your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter the element to be insert: ");
            scanf("%d",&x);
            addbeg(x);
            break;

            case 2:
             printf("Enter the element to be insert: ");
            scanf("%d",&x);
            addend(x);
            break;

            case 3:
             printf("Enter the element to be insert: ");
            scanf("%d",&x);
            printf("Enter the position: ");
            scanf("%d",&pos);
            addpos(pos,x);
            break;

            case 4: delatbeg();
                    
            break;

            case 5: delatend();
                    
            break;

            case 6: printf("enter the position to be display: ");
                    scanf("%d",&pos);
                    delatpos(pos);
                    
            break;

            case 7:display();
            break;

             case 8: printf("enter the element to be search: ");
                    scanf("%d",&pos);
                    search(pos);

             case 9:reverse();
            break;


            default: 
            printf("invalid choice!!");
            break;

        }
    }
}