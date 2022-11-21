#include<stdio.h>
#include<conio.h>
int main()
{
    int no,a=0,b=1,c=0,cnt=0;
    printf("Enter the number : ");
    scanf("%d",&no);
    while(c<=no)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==no)
            cnt++;
    }
    if(cnt==1)
        printf("%d is a fibonacci number",no);
    else
        printf("%d is not a fibonacci number",no);
    return 0;
    getch();
}