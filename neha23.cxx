//Author:Neha Nair  Branch: IT  Roll no.: 40
//Write a function that compares two arrays and returns 1 if they are identical and 0 otherwise

#include<stdio.h>

int main()
{

    int a[100],b[100],i,j,n1,n2;

    //accepting elements
    printf("Enter the number of elements to be entered in arr 1 : ");
    scanf("%d",&n1);

    //storing elements

    for ( i = 0; i < n1; ++i)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the number of elements to be stored in arr 2 : ");
    scanf("%d",&n2);
    
     for ( j = 0; j < n2; ++j)
    {
        printf("Enter the element %d: ",j+1);
        scanf("%d",&b[j]);
    }

//comparing the two arrays
    if(a[i] == b[j]){

        printf("1");
    } else{
                       
        printf("0");
    }
    


}