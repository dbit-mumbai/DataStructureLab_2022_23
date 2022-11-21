#include<stdio.h>

int main()
{
	int marks[10],rono[10],i,j,a;
	
	
	
	for(i=0;i<10;i++)
	{
		printf("\nEnter marks of %d student : ",i+1);
		scanf("%d",&marks[i]);
		rono[i]=i+1;
		
	}
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if (marks[i] > marks[j]) 

                {

                    a = marks[i];

                    marks[i] = marks[j];

                    marks[j] = a;
                    
                    
                    
                    a = rono[i];

                    rono[i] = rono[j];

                    rono[j] = a;
                }
        }        
	}
	
	        printf("The marks arranged in descending order are given below\n");

 

        for (i = 0; i < 10; i++) 

        {

            printf("%d\t %d\n", rono[i], marks[i]);

        }

 

}
void main()

	
		


			
