#include<stdio.h>   
long factorial(int);  
int main()  
{  
    int j, n, k;  
    printf("Enter the number of rows you wish to see in pascal triangle : ");  
    scanf("%d", & n);  
    printf("\n");
    for (j = 0; j < n; j++) 
    {  
        for (k = 0; k <= (n - j - 2); k++) 
            printf(" ");  
        for (k = 0; k<= j; k++) 
            printf("%ld ", factorial(j) / (factorial(k) * factorial(j - k)));  
        printf("\n");  
    }  
    return 0;  
}  
long factorial(int n) {  
    int i;  
    long result = 1;  
    for (i = 1; i <= n; i++)
     result = result * i;  
    return result;  
}  
