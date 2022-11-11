#include<stdio.h> 

int main()
{
	int t[100][100]; // Array Declaration
	int n, i, j, k, space; // Declaration of variables
	
	printf("Enter height of the triangle : ");
	scanf("%d", &n); // Input : height
	
	for(i = 0; i < n; i++) // putting values in pascals triangle using nested for loop
	{
		for(j = 0; j < n+1; j++)
		{
			if(i == 0)
			{
				if(j == 0)
				{
					t[i][j] = 1;
				} else {
					t[i][j] = 0;
				}
			}
			else if (i == 1)
			{
				if( j == 0 || j == 1)
				{
					t[i][j] = 1;
				} else {
					t[i][j] = 0;
				}
			} else {
				if(j == 0 || j == i)
				{
					t[i][j] = 1;
				}else{
					t[i][j] = t[i-1][j-1] + t[i-1][j]; // calculation of terms in between
				}
			}
		}
	}
	
	
	space = n+1/2; // space
	
	// displaying pascal triangle using proper spacing 
	for(i = 0; i < n; i++) 
	{
		
		for(k = space; k > 0; k--)
		{
			printf("%c", ' ');
		}
			
		for(j = 0; j < n+1; j++)
		{
			
				
			if(T[i][j] == 0)
			{
				printf("%c", ' ');
			} else {
				
				printf("%d ", T[i][j]);
			}
		}
		printf("\n");
		space-=1;
	}
	return 0;
}