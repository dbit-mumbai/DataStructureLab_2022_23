#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number:");// accepting a number
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    if(n==0) // checking if the number is fibonacci number and printing output
        printf("%d is fibonacci number",n);
    while(c<n) 
    {
         a=b;  
         b=c;
         c=a+b;
    }
    // checking if the number is fibonacci number and printing output
    if(c==n)
        printf("%d is fibonacci number",c);
    else
        printf("%d is not a fibonacci number",n);
}