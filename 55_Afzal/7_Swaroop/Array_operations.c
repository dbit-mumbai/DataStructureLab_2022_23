//Write a menu driven program to perform the following operations in an ARRAY
//1. INSERT
//2. DELETE
//3. TRAVERSE
//4. SEARCH

#include<stdio.h>
int a[100];
int size,i,pos, num;
//DECLARING FUNCTIONS
void insert();
void delete();
void traverse();
void search();
//INITIALIZING MAIN FUNCTION
 
int main()
{
    printf("......LETS CREATE AN ARRAY FIRST.....\n ");
     printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ");
    for(i=0; i<size; i++)
    {
       scanf("%d", &a[i]);  
    }
    printf("The array elements are : ");
       for(i=0; i<size; i++)
    {
        printf(" %d", a[i]);
    }
	int choice;
	//ASKING USER FOR INPUT
	while(1)  //USING INFINITE LOOP	
	{
	    printf("\n----Array Operation---");
        printf("\n1. Insert an element into the array");
        printf("\n2. Delete an element form the array");
        printf("\n3. Traverse the array");
        printf("\n4. Search an element in the array");
        printf("\n");
	    scanf("%d",&choice);
	    //USING SWITCH CASE TO PERFORM OPERATIONS
		
		switch(choice)
		{
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: traverse();
					break;
			case 4: search();
                    break;
			
			default: printf("\nWrong choice");
		}
	}
}
void insert()
{
     printf("\nEnter the number you want to insert : ");
    scanf("%d", &num);

    printf("Enter the position where you want to insert : ");
    scanf("%d", &pos);
    for (i=size-1; i>=pos-1; i--)
    {
     a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("New array is :\n");
    for(i=0; i<size; i++)
        
         printf("%d ", a[i]);  
}
void delete()
{
    printf("\nEnter from which position you want to delete : ");
    scanf("%d", &pos);
    for (i=pos-1; i<size-1; i++)
    {
     a[i]=a[i+1];
    }
    size--;
    printf("New array is :\n");
    for(i=0; i<size; i++)
        
         printf("%d ", a[i]);  
    
}
void traverse()
{
    printf("The array elements are : ");
       for(i=0; i<size; i++)
    {
        printf(" %d", a[i]);
    }
}
void search()
{
    printf("Enter the position of the element you want to search : ");
    scanf("%d", &pos);
    a[pos]=num;
    printf("The element you are searching is : %d ", num);
}