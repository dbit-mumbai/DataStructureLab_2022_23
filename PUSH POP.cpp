#include<stdio.h>
#define N 5
 int stack[N];
  int top =-1;
  
    void push(){    
    	int x;
    		printf("Enter Data");
    		scanf("%d",&x);
    		if(top==N-1){
    			printf("Overflow");
			}
			else{
				top++;
				stack[top]=x;
			}
	}
	void pop(){
		int item;
		if(top==-1){
			printf("Underflow");}
			else{
				item=stack[top];
				top--;
				printf("%d",item);
			}
		
	}
	void peek(){
		if(top==-1)
		{
			printf("Underflow");
		
		}
		else{
			printf("%d",stack[top]);
		}
		
	}
	void display(){
		int i;
		for(i=top;i>=0;i--){
			printf("%d",stack[i]);
		}
	}
	 int main(){ 
	   int ch;
	   
	   do{
	   	printf("Enter choice: 1:Push 2:Pop 3:Peek 4:Display");
	   	scanf("%d",&ch);
	   	switch(ch);
	   	{
	   		case1: push();
	   		        break;
	   		case2: pop();
	   				break;
	   		case3: peek();
	   				break;
	   		case4: display();
	   				break;
	   		
	   				
		   }
		   
	   }while (ch !=0);
	   	 
	}
