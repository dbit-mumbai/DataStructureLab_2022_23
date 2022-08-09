//Author: Dhruuv Naik   Branch: IT  Roll no.: 39
//Write a function that compares two arrays and returns 1 if they are identical and 0 otherwise
#include <stdio.h>
#include <string.h>
#define size 100 //setting array size to 100

char arr1[size], arr2[size]; //declaring 2 arrays

void compare(); //declaring compare function

int main()
{   //Asking the user to input 2 arrays
    printf("\nEnter array 1 elements : ");
    gets(arr1);
    
    printf("\nEnter array 2 elements : ");
    gets(arr2);
    
    compare(); //calling compare function
}
