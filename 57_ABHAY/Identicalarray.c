#include <stdio.h>

int main() {
    int count = 0;
    int a[3];
    int b[3];
    printf("Enter any 3 elements for first array:");
    for(int i = 0; i <= 2;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter any 3 elements for second array:");
    for(int i = 0 ; i<=2 ; i++){
        scanf("%d" , &b[i]);
    }
    
    for(int i =0; i <=2 ; i++){
        if(a[i]==b[i]){
          count++;
        } 
    }
    if(count==3){
        printf("1");
    } else {
      printf("0");
    }
    return 0;
}