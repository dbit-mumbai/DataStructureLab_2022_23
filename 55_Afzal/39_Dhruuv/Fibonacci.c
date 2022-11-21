//Author: Dhruuv Naik   Branch: IT  Roll no.: 39
//Write a C program to check if a given number is Fibonacci number

#include <stdio.h>
int main()
{
    int n, a=0, b=1, c, i;//declaration
    //Taking input from user
    printf("Enter a number : ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++) //runs a loop that generates fibonacci series
    { 
        if (n==a || n==b || n==c) //checks if n is equal to any number in fibonacci series
        {
            printf("Entered number is in Fibonacci series.");
            i=-1;
            break;
        }
        
        c=a+b; 
        a=b;
        b=c;
    }
    
    if (i!=-1)  //will only print if there wasn't a match found in above for loop
    {
        printf("Entered number is not in Fibonacci series.");
    }  
}