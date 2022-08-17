#include<stdio.h>
int c(int a[5],int b[5])
{
    for (int i=0;i<5;i++)
    {
        
        if(a[i]=b[i])
            return 1;
        else
            return 0;
    }
}
int main()
{
    int x[5],y[5];
    for (int i=0;i<5;i++)
       { printf("enter an array %d",i+1);
       scanf("%d",&x[i]);}
    for (int i=0;i<5;i++)
       { printf("enter an array %d",i+1);
       scanf("%d",&y[i]);}
    //function call
    c(x[5],y[5]);
}
