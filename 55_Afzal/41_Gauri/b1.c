//Write a C program to check if a given number is Fibonacci number
//Name : Gauri nevase ; Roll_n0=41  ;SE_IT
#include<stdio.h>
#include<math.h>
int isPerfectSquare(int x)
{
    int s= (int) sqrt(x);
    return (s*s==x);
}
int isFibonacci(int x)
{
    if (isPerfectSquare(5*x*x + 4)|| isPerfectSquare(5*x*x - 4))
    return 1;
}
int main()
{
    int n;
    printf("Enter a nuber "); 
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a fibonacci number ? %d",n,isFibonacci(n));
    }
    return 0;
}