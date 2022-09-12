#include<stdio.h>
#define size 5

int queue[size], f=-1, r=-1;

void enqueue();
void dequeue();
void isempty();
void show();

int main()
{
    int choice;
    while (1)
    {
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Enqueue\n       2.Dequeue\n       3.Is Empty\n        4.Show\n        5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice); //saves the user's choice
    }
    
}