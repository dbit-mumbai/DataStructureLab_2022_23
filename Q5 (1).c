// C Program To Find Largest Element of an Array
#include <stdio.h>
int main()
{
    int i, largest;
    int arr[10] ;
    printf("Enter the Array Elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    
    for (i = 0; i < 10; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("Largest Element of the array is: %d", largest);
    return 0;
}