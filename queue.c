#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;

while(1)
{
    printf("\n\n----Queue Operation----");
    printf("\n1.Insertion ");
    printf("\n2.Deletion");
    printf("\n3.Display");
    printf("\n4.Exit");

    printf("\nEnter the Choice:");
    scanf("%d",&ch);
        
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\nQueue is Full");
            else
            {
                printf("\nEnter number : ");
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\nQueue is empty");
            }
            else
            {
                printf("\nDeleted Element is %d",queue[front++]);
		x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n");
            if(front==rear)
                printf("\nQueue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
	    }
                break;
         case 4:
                exit(0);
            default:
                printf("\nWrong Choice");
            
        }
}
    return 0;
}
