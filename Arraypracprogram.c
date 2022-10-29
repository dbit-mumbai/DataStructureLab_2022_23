
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[50];
    int ch, num , pos;
    int size = 9;
    while(1)
    {
        printf("---------Operations of Array---------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d" , &ch);
    
    switch(ch)
    {
        case 1: printf("Enter the number of elements you want to insert: ");
                scanf("%d" , &num);
                printf("Enter elements you want to insert:");
                for(int i = 0; i < num ; i ++)
                {
                    scanf("%d" , &arr[i]);
                }
                break;
        case 2: printf("Enter the position you want to delete: ");
                scanf("%d" , &pos);
                for(int i = pos - 1 ; i < size - 1 ; i++)
                {
                    arr[i] = arr[i+1];
                } size--;
                break;
        case 3: for(int i =0; i < size ; i++)
                {
                    printf("%d\t" , arr[i]);
                }
                break;
        case 4: exit(0);
                break;
        default: printf("Invalid Choice!");
    }
    
}

}