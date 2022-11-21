// Code to find whether a given number is a Fibonacii Number or Not

#include<stdio.h>
int main()
{
    int n,a,b,i,c;

    // Taking Inputs
    printf("Enter number to be checked: ");
    scanf("%d",&n);

    // Assigning values for first 2 Fibonacii Numbers
    a=0;
    b=1;


      // Checking for a Fibonacii Number
        if(n==0)
            printf("Fibonnaci number");
        c = a + b;

            while(c<n)
            {
                a = b;
                b = c;
                c = a + b;
            }
            if(c==n)
                printf("%d is a Fibonacci number",n);
            else
                printf("not a Fibonacci number");
}

/*

Output:

Enter number to be checked: 2
2 is a Fibonacci number

*/