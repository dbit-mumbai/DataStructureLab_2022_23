#include<stdio.h>

void main()
{
	int arr[50];	
	int ch,cnt;
	int n1,n,i,j,pos;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	j=n;
	cnt=n;

	while(1)
	{
		//clrscr();

		printf("\n----Array Operation---");
		printf("\n1. Insert an element into the array");
		printf("\n2. Delete an element from the array");
		printf("\n3. Traverse the array elements");
		printf("\n4. Search the array element");


		printf("\n Enter your choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\nEnter the element to be inserted into the array:");
				scanf("%d",&arr[j]);
				j++;
				cnt++;
				break;

			case 2: printf( "\nDefine the position of the array element where you want to delete: \n ");  
    				scanf ("%d", &pos);  
    				if(pos>= n+1)  
  			        {  
        				printf ("\nDeletion is not possible in the array.");  
    				}  
    				else  
    				{  
          
        				for (i=pos-1;i<n-1;i++)  
        				{  
            					arr[i] = arr[i+1];
        				}  
          
        				printf (" \n The resultant array is: \n");  
           
        				for (i=0; i<cnt-1; i++)  
        				{  
            					printf (" arr[%d] = ", i);  
            					printf (" %d \n", arr[i]);  
        				}  
   			  	}  
				break;

			case 3:	for(i=0;i<cnt;i++)
				{
					printf("%d ",arr[i]);
				}
				break;

			case 4: printf("Enter the element to be searched: ");
				scanf("%d",&n1);
				for(i=0;i<n;i++)
				{
					if(n1==arr[i])
					{
						printf("element found at %dth position\n",i+1);
					}
				}
				break;

			default: printf("\n Wrong Choice\n");
				 break;
		} //end of switch

	} //end of while

} /* End of Main Method */

