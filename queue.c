#include<stdio.h>
#define size 5
int stck[], r=-1, f=-1, ch;
void enqueue();
void dequeue();
void empty();
int main
{
    int i=0, j=0;
    //options present
    while(i!=3){
        printf("\n----Queue_Menu-----");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.isEmpty");
        printf("\n4.Show");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        //switch case
        switch(ch)
        {
            case 1:
            	printf("Enter a integer : ");
            	scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice!");
        }//switch case
    }//while loop
}//main function

void enqueue(int x){//adding element in the queue
    if(f==-1 && r==-1)
    {
        f++;
        queue[++r]=x;
    }
    else{
        if(r==size-1)
        {
            printf("\nqueue overflow");
        }
        else
        {
            queue[++r]=x;
        }
    }
}//enqueue
void dequeue()  //delete element from f
{
    //check queue is empty or not
    if(r==-1 && f==-1)
    {
        printf("queue is mt");
    }
    else if(r==f)//single element
    {
        f=-1;
        r=-1;
    }
    else {//other element
        f++;
    }
}//dequeue ends

void show()
{
    int i;
    if(f==-1 && r==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(i=f;i<=r;i++)
        {if(r == f)
        	{
        		printf("\n%d <- front & rear", queue[i]);
			}
        	else if(i == f)
        	{
        		printf("\n%d <- front",queue[i]);
			}
			else if(i == r)
			{
				printf("\n%d <- rear ",queue[i]);
			} 
			else
			{
            	printf("\n%d", queue[i]);
        
            }	
        }
    }
}