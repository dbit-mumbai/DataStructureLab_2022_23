
#include<stdio.h>
#define size 6
int f=-1;
int stack[size];

void push(){
	int x;
    if(f==-1){
        
        f=f+1;
        printf("Enter the number:");
        scanf("%d",&x);
        stack[f]=x;
        
    }
    else if(f==size-1)
	{
        printf("Stack is Full");
    }
    else{
        printf("Enter the number:");
        scanf("%d",&x);
        f=f+1;
        stack[f]=x;
    }
}
void pali(){
        int i=0,cnt=0;
        while(i!=f){
            if(stack[i] != stack[size-i-1]){
                printf("The Number is Not Palindrome");
				cnt=1;
            }
            i=i+1;
        }
        if(cnt==0)
        printf("Palindrome");

}

int main(){
    int i=0,x;
    while(i!=1){
    	printf("Enter Your Choice:");
    	scanf("%d",&x);
        switch (x)
        {
        case 1: push();
            break;
        case 2: //pop();
            break;
        case 3:pali();
            break;
        case 4: i=1;
            break;
        default:
            break;
        }
    }
}
