#include <stdio.h>
int fib(int x);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d" , &x);
    printf("Fibonacci of %d is %d",x , fib(x));

    return 0;
}
int fib(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    int fibnm1 = fib(x-1);
    int fibo = fibnm1 + fib(x-2);
    return fibo;

}