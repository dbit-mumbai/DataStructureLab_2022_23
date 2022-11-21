#include <stdio.h>

int main()
{
    int n1, n2, n3, number;
    n1 = 0;
    n2 = 1;
    printf("Enter a number:");
    scanf("%d", &number);
    if(num == 0 || num == 1)
    {
        printf("Its a fibonacci number");
    }
    else {
        n3 = n1 + n2;
    }
    if (n3 < number)
    {
        n1= n2;
        n2= n3;
        n3= n1+n2;
    }
    if (n3==number)
    { printf("It's a fibonacci number");
    else { 
        printf("It's a not");
    }
    return 0;
}
