#include<stdio.h>
int main()
{
    int n;
    double arr[100];

    // Reading no. of elements from user
    printf("Enter the number of elements(1 to 100) :\n");
    scanf("%d",&n);
    
    // Reading the array elements
    for(int i=0;i<n;i++)
    {
        printf("Enter NUmberfield %d : ",i+1);
        scanf("%lf",&arr[i]);
         
        // Comparing mechanism for greatest from the array 
        for(int i =1;i<n;i++)
        {
            if(arr[0]<arr[i])
              arr[0]=arr[i];
        }
    }  

    printf("Largest Element : %.2lf",arr[0]); 

    return 0; 
}

/*

Output:

Enter the number of elements(1 to 100) :
6
Enter NUmberfield 1:2
Enter NUmberfield 2:3
Enter NUmberfield 3:4
Enter NUmberfield 4:5
Enter NUmberfield 5:6
Enter NUmberfield 6:7
Largest Element : 7.00

*/