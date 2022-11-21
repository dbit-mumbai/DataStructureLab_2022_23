// program to check if a given number is fibonacci number
#include <stdio.h>
int main() {
//defining a and b
    int i,n,a=0,b=1,c;
//taking input
    printf ("enter no:\n");
    scanf("%d",&n);
//condition if n=0
    if (n==0){
        printf("fibonacci");
    }//putting the value of c in terms of a,b
    c=a+b;
//condition to start loop
    while (c<n){
    //substituting all values ...
        a=b;
        b=c;
        c=a+b;
    } if(c==n){
    //if condition is true printing fibonacci
        printf("fiboncci");
    }     else{
        //if the condition is false printing not fibonacci
        printf("not fibonacci");
    }
}
