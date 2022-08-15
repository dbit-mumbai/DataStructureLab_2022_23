// C program to check fibonacci numbers
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
 
bool isPerfectSquare(int x) //function that returns true if x is perfect square
{
    int s = sqrt(x);
    return (s * s == x);
} 

bool isFibonacci(int n) // Returns true if n is a Fibonacci Number, else false
{
       return isPerfectSquare(5 * n * n + 4)  // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 
           || isPerfectSquare(5 * n * n - 4); // both are a perfect square
}
 
int main()
{
         int n; //declaration
         printf("enter no of elements : ");
         scanf("%d" ,&n);    //taking input
        for (int i = 1; i <= n; i++) {
        if (isFibonacci(i))
            printf("%d is a Fibonacci Number \n", i);
        else
            printf("%d is a not Fibonacci Number \n", i);
    }
    return 0;
}
  
        
        