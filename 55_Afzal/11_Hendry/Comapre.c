#include<stdio.h>
 
int compare(int arr1[], int arr2[])
{
	int i, len, same;
	
	same = 0;

	if((sizeof(arr1)/sizeof(arr1[0])) != (sizeof(arr2)/sizeof(arr2[0])))
	{
		return 1;
	}
	
	len = sizeof(arr1)/sizeof(arr1[0]);
	
	for(i = 0; i < len; i++)
	{
		if(arr1[i] != arr2[i])
		{
			same = 1;
			break;
		}
	}
	
	return isIdentical;
}

int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {1,2,3,4,5};
	int arr3[5] = {6,7,8,9,2};
	
	int identical;
	
	identical = compare(arr1, arr3); 
	
	if(identical == 1)
	{
		printf("Not Identical!\n");
	} 
	else
	{
		printf("Identical!\n");
	}
	
	return 0;	
}

