#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;

    while(1)		
    {
	printf("\n\n----Circular Queue Operation----");
        printf("\n1. Add");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    printf("\nQueue is full");
		}
                else
                {
                    printf("\nEnter a number: ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    arr[R]=n;
                    te=te+1;
                }
                break;

            case 2:
                if(te==0)
                {
                    printf("\nQueue is empty");
                    
                }
                else
                {
                    printf("\nNumber Deleted = %d",arr[F]);
                    F=(F+1)%size;
                    te=te-1;
                    
                }
                break;

            case 3:
		 if(te==0)
                {
                    printf("\nQueue is empty");
                    
                }
                else
                {
 		    printf("\nElements are: ");
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        printf("\t%d",arr[x]);
                        x=(x+1)%size;
			
                    }
                    
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("\nWrong Choice");
                
	 }
    }
    return 0;
}

