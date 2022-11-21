// Name: Srujana Makarande, Roll no: 33-IT //
#include<stdio.h>
void main()
{
        int n,a=0,b=1,c;
        printf("Enter a number:");
        scanf("%d", &n);
        if(n==a || n==b)
        printf("fibonacci");
        c=a+b;
        while (c<n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if (c==n)
            printf("fibonacci");
            else
            printf("not fibonacci");
}               
        