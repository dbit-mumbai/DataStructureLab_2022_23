 #include<stdio.h>
int n;
 int checkfibonacci(int n)
        {
            int a = 0;
            int b = 1;
            if (n==a || n==b) return printf("It is a fibonacci number");
            int c = a+b;
            while(c<=n)
            {
                if(c == n) return printf("It is a fibonacci number");;
                a = b;
                b = c;
                c = a + b;
            }
            return printf("It is not a fibonacci number");;
        }


int main (){
	printf("Enter the number to check whether it is a fibonacci number or not :");
	scanf("%d",&n);
	checkfibonacci(n);
   return 0;
   }
   
