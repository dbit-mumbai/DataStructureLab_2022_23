#include<stdio.h>
void insertarr (int arr [],int size){
    int index = 0;
    for ( index = 0; index < size; index++)
    {
      printf("Enter the arr[%d]",index);
      scanf("%d",&arr[index]);
    }
}
int compare (int arr1 [], int arr2 [], int size){
  int index;
  for ( index = 0; index < size; index++)
  {
    if (arr1[index]!=arr2[index]){
      return 1;
    }
    return 0;
  }
  if(compare(arr1,arr2,size)==0){
    printf("Arrays have same elements");}
  else{
    printf("Arrays have different elements");
  }
  
  }
int main (){

    int size1,size2;
  printf("Enter the size of the array1:");
  scanf("%d",&size1);
  printf("Enter the size of the array2 :");
  scanf("%d",&size2);
  int a[size1],b[size2];
  insertarr(a,size1);
  insertarr(b,size2);
  if (size1 == size2)
  {
   compare(a,b,size1); 
  }
  else
  {
    printf("Both of the given arrays do not have same size hence cannot be compared");
  }

}
