#include <stdio.h>
int main()
{
	int pasc[100][100],i,j,n;
	
	printf("\nEnter the number of rows : ");
	scanf("%d ",&n);

	for(i = 0;i<n;i++)
	{
		for(j = 0; j<=n-1-i; j++)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			if(j==0 || j==i)
				pasc[i][j] = 1;
			
			else
				pasc[i][j] = pasc[i-1][j-1] + pasc[i-1][j];
		}

		for(j=0;j<=i;j++)
		{
			printf("%d",pasc[i][j]);
		}

		printf("\n");
	}
}