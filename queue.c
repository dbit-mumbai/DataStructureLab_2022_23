#include <stdio.h>

 

#define MAX 50

 

void insert();

void delete();

void display();

int queue_array[MAX];

int rear = - 1;

int front = - 1;

main()

{

    int choice;

    while (1)

    {

        printf("1.Insert element to queue \n");

        printf("2.Delete element from queue \n");

        printf("3.Display all elements of queue \n");

        printf("4.Quit \n");

        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch (choice)

        {

            case 1:

            insert();

            break;

            case 2:

            delete();

            break;

            case 3:

            display();

            break;

            case 4:

            exit(1);

            default:

            printf("Wrong choice \n");

        } 
    }
}

    
