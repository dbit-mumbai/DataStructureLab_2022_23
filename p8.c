/*  Author: Dhruuv Naik   Branch: IT  Roll no.: 39
    Define a structure data type called time_struct containing 3 members int hour, int minute and int second.
    1.Input time    2.Display time  3.Update time(increment time by 1 second)
*/
#include <stdio.h>

void input(); //declaring functions
void display();
void update();

struct time_struct //declaring and defining structure
{
    int hour, minute, second;
}t;

int count=0;

int main()
{
    int choice;

    while (1) //loops the program
    {   //displays menu 
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Input time\n2.Display time\n3.Update time\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice); //saves the choice od=f user    

        switch (choice)
        {
            case 1: input();
                    break;
        
            case 2: display();
                    break;
        
            case 3: update();
                    break;
            
            case 4: return 0;

            default:printf("Invalid input!");
                    break;
        } 
    }
    
}
