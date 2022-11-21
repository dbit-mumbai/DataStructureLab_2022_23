/* Q5. WAP find largest element in an array.
   Author: Sraina   Roll Number: 43     Batch: C */

#include<stdio.h>
int main()
{
    int i, j, step, temp;
    int arr[10];

    //For loop for input

    printf("Enter Elements: \n");

    for(i = 0; i < 10; i++)
    { 
        scanf("%d", &arr[i]); 
    }

    //For loop for sorting 

    for(step = 0; step < 9; step++)
    {
        for(i = 0; i < 10-step; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

        }
    }

    printf("Largest Element: %d\n", arr[9]);

}