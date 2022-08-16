// Name :-  Sumit Sawant
// Roll No:- 51
// Prog To check if number is fibonacci Number
int main(){ 
	int n,i,j=10,f=0,s=1,t,count=0;
	
	// For Taking Input
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	// Default Fibonacci number
	if(n==0 || n==1)
	{
		printf("Number is a Fibonacci Number");
	}
	
	while(t<n+1)
	{
		// For Calculating Fibonacci Number
		t=f+s;
		if(n==t){
			printf("Number is a Fibonacci Number\n");
			count=0;
			break;

		}
		else  // For Initializing count to 1
			count=1;
		f=s;
		s=t;
	}
	// For printing if number is not fibonacci
	if(count==1){
		printf("Number is not a fibonaci Number");
	}
}