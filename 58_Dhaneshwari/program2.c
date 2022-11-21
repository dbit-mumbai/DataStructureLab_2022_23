/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
struct time
{
    int hour, minute ,second;
};

int main()
{
    struct time t;
    printf("enter time in second minute hour ");
    scanf("%d:%d:%d", &t.second, &t.minute, &t.hour);
    printf("time in second minute hour ", t.second, t.minute, t.hour);

}