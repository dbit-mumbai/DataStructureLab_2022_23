Name :- Cyril Angel Sequeira
Roll no:- 52
#include<stdio.h>
#include<string.h>

//Write a function that compares tw

int main(){
	int a[70],b[70],j,k,i,count=0;
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