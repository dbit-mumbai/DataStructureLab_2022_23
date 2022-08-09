//Author: Dhruuv Naik   Branch: IT  Roll no.: 39
//Write a menu driven program to perform the following operations in an ARRAY to 1.Insert 2.Delete 3.Traverse 4.Search
#include <stdio.h>
#define size 5 //setting stack size

int array[size], top=-1; //declaring array, top and functions
void insert();
void delete();
void traverse();
void search();

int main()
{

    int choice;

    while(1) //to loop the program
    {   //printing a menu
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Insert\n2.Delete\n3.Traverse\n4.Search\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice); //saves the users choice
 
        switch (choice)
        {
            case 1: insert();
                    break;
        
            case 2: delete();
                    break;
    
            case 3: traverse();
                    break;
    
            case 4: search();
                    break;

            case 5: return 0; 
        
            default:printf("\nInvalid choice!\n");
        }

    }

}
