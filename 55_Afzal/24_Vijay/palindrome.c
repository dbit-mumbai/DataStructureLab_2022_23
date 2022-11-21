void palindrome()
{
if (top==-1)
{
printf("\nStack is empty!\n");
}
else
{
int i, count = 0;
for ( i = 0 ; i <= top; i++)
{
if(stack[i] != stack[top-i]){
count++;
}
}
if (count>0)
printf("\nStack is not palindrome!\n");
else{
printf("\nStack is palindrome!\n"); }}}