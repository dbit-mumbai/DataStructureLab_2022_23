#include<stdio.h>
void insertarr (int arr [], int size){
    int size;
  printf("Enter the size of the array :");
  scanf("%d",&size);
    int index = 0;
    for ( index = 0; index < size; index++)
    {
      printf("Enter the arr[%d]",index);
      scanf("%d",&arr[index]);
    }
}
void deletearr (int arr [], int size){
  int index =0;
  int delindex;
  printf("Enter the index of the element that has to be removed :");
  scanf("%d",&delindex);
  if(delindex>=size+1){
    printf("No element storred on the following index");
  }
  else
    for(index=delindex-1; index<size-1; index++){
        arr[index]=arr[index+1];
    }
}
void traverse (int arr [], int size){
  int i;
  printf("The following are the elements of the array :");
  for ( i = 0; i < size; i++)
  {
    printf("%d",arr[i]);
    
  }
  
}
void search(int arr [], int size){
  int index,search,count;
  printf("Enter the element to be search :");
  scanf("%d",&search);
  count =0;
  for ( index = 0; index < size; index++)
  {
    if (arr[index]==search)
    {
      count ==1;
      break;
    }
  }
  if (count ==1)
    printf("%d is found at position %d",search,index+1);
  else
    printf("%d is not found in the array",search);
  
}

int main (){
    int ch,n1;
    printf("\n----Array Operation---");
printf("\n1. Insert an element into the array:");
printf("\n2. Remove an element from the array:");
printf("\n3. Traverse the array elements:");
printf("\n4. Search the array elements:");


printf("\n Enter your choice:");
scanf("%d",&ch);
int size;
  int a[1000];
switch(ch){
    case 1 :insertarr(a,size);
            break;
    case 2 :deletearr(a,size);
            break;
    case 3 :traverse(a,size);
            break;
    case 4 :search(a,size);
            break;
    default: 	printf("\n Wrong Choice");
				break; 
}
}
