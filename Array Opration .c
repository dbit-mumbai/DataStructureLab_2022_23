#include<stdio.h>

int main()
{
    int ch,a[10],i ,n1, pos ,element,search;
    while(1)
    {
        printf("\n------Array Opration------");
        printf("\n1.Insert an element into array");
        printf("\n2.Delete an element from array");
        printf("\n3.Travarse the array elements ");
        printf("\n4.Search the array element");
        printf("\n5.Exit");  
        printf("\nEnter your choice: ");
        scanf("%d",&ch);      
    
    switch(ch)
    {
        case 1: printf("\nInsert the no. of elements for array: ");
                scanf("%d",&n1);
                for(i=0;i<n1;i++)
                {
                    printf("\nInsert the array element %d: ",i+1);
                    scanf("%d", &a[i]);
                }
                break;
        case 2: printf("Define the position where you want to delete an element: ");
                scanf("%d", &pos);
                if(pos>=n1)
                {
                    printf("Deletion is not possible");
                }
                else
                {
                    for (i = pos - 1; i < n1; i++)  
                    {  
                       a[i]=a[i+1];
                    }  


                } 
                break;
        case 3: for(i=0;i<n1;i++)
                {
                    printf("%d \t", a[i]);
                }
                break;
        case 4:printf("Enter element to search: "); 
               scanf("%d",&element);
               for(i=0; i<n1; i++)
               {
                    if(a[i]==element) 
                    {
                        search=1;
                    }
               }
               if(search ==1)
                    { 
                         printf("%d found at position %d", element, i+1); 
                    } 
               else
                    {
                        printf("%d not found.", element);
                    }
                     break;
        case 5: exit(1);
                break;
        default: printf("\nWrong choice");   
                break;
     }
    }
}
                
           