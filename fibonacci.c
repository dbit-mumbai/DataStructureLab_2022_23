
//WAP to check if a given number is a fibonacci number



#include<stdio.h>

int main()
{
	int n, a=0, b=1, c;
	
	printf("enter no :\n");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("fibonacci");
	}
	c=a+b;
	
	while (c<n)
	{
		a=b;
		b=c;
		c=a+b;
	}
	if(c==n)
	{
		printf("the number is fibonacci");
	}
	else
	{
		printf(" the number is not fibonacci");
	}
		
}
