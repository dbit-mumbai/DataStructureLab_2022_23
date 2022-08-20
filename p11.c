/*  Author: Dhruuv Naik   Branch: IT  Roll no.: 39
    WAP to perform postfix evaluation
*/
#include <stdio.h>
#define size 20

int stack[size];
char eq[size];
int top=-1,n=0;

int eval();
void push(int n);
int pop();

int main()
{
    //Asking user to input equation
    printf("\nEnter equation : ");
    gets(eq);
    //printing solution of equation
    printf("\nThe solution of above equation is : %d", eval());
}
