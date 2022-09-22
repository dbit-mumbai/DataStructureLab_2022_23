
#include<stdio>
#define size 6
int f=-1;
int stack[size];

void push(){
    if(f==-1){
        int x;
        f=0;
        printf("Enter the number:");
        scanf("%d",&x);
        stack[f]=x;
    }
    else if(f=size){
        printf("Stack is Full");
    }
    else{
        printf("Enter the number:");
        scanf("%d",&x);
        stack[f]=x;
        f=f+1;
    }
}
void pali(){
    if(size%2==0){
        int i=0;
        while(i!=front){
            if(stack[i]!=stack[size-i]){
                printf("The Number is Not Palindrome");
            }
            i=i+1;
        }
        printf("Palindrome");
    }

}

int main(){
    int i=0,x;
    while(i!=1){
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

