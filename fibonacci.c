#include <stdio.h>
int main()
{
	int num, con1=0, con2=1, sum=0,i;
	
	printf("\nEnter the number : ");
	scanf("%d",&num);

	for(i = 0;i >= 0;i++)
	{
		sum = con1 + con2;
		con1 = con2;
		con2 = sum;

		printf("%d ",con1);

		if(con1 == num)
		{
			printf("\n%d is a fibonacci number. \n",num);
			break;
		}
	}
}