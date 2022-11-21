//Write a function that compares two arrays and returns 1 if they are identical and 0 otherwise
#include <stdio.h>
#include <string.h>
#define size 100 //setting array size to 100

char ch1[size], ch2[size]; //declaring 2 arrays

void compare(); //declaring compare function

int main()
{   //Asking the user to input 2 arrays
    printf("\nEnter array 1 elements : ");
    gets(ch1);
    
    printf("\nEnter array 2 elements : ");
    gets(ch2);
    
    compare(); //calling compare function
}

void compare()
{
    int count=0;
    
    for ( int i = 0; ch1[i] != '\0'; i++)
    {
        if (ch1[i]!=ch2[i]) //checks if the arrays are not identical
        {
            printf("\nNOT IDENTICAL");
            count=1;
            break;            
        } 
    }
    
    if (count==0)
    {
        printf("\nIDENTICAL"); //is displayed if the arrays are identical
    }     
}