

#include<stdio.h>
#define size 4

void main(){
    int count=1,ch,f=-1,r=-1;
    while(count==1)
    {
        printf("--------- Queue Operations ----------");
        printf("\n 1) Insert An Element");
        printf("\n 2) Delete an Element from Queue");
        printf("\n 3) Show Queue ");
        printf("\n 4) Exit  ");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        
        switch(ch){
            case 1 : Insert();
                break;
            case 2 : Delete();
                break;
            case 3 : Show();
                break;
            case 4 : count = 0;
                break;
            default :
                printf("You Entered a Wrong Choice");
                break;
        }
        
        

    }
    
}