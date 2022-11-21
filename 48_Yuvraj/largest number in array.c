#include<stdio.h>
int main()
{
int a[100],n,i,max;
printf("Enter number of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter element=");
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("\nLargest Number=%d",max);
return 0;}