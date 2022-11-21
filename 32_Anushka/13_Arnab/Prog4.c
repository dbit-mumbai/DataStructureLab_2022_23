
#include<stdio.h>
#include<string.h>

//Write a function that compares two arrays and returns 1 if they are identical and 0 otherwise.

int main(){
	int a[70],b[70],j,k,i,count=0;
	// For taking Input in Array
	printf("Enter The Number of Elements :");
	scanf("%d",&i);
	printf("Enter Element of array 1:\n");

	for(j=0;j<i;j++)
	{
		printf("Enter Array Elements %d:",j+1);
		scanf("%d",&a[j]);
	}
	printf("\nEnter Element of array 2:\n");
	for(j=0;j<i;j++)
	{
		printf("Enter Array Elements %d:",j+1);
		scanf("%d",&b[j]);
	}
	// Comparing The arrays

	for(j=0;j<i;j++)
	{
		if(a[j]!=b[j])
		count=1;		
	}
	// For Output
	if(count==1)
		printf("\n 0\n");
	else
		printf("\n 1\n");

}
