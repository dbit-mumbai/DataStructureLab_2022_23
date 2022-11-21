#include <stdio.h>

struct Details {
    int Roll_no;
    char Name[20];
    float Percentage;
} s[5];

int main() {
    struct Details temp;
    for(int i = 0; i <= 4; i++){
        printf("Enter Roll No of %d student: \n", i+1);
        scanf("%d", &s[i].Roll_no);
        printf("Enter Name of %d student: \n", i+1);
        scanf("%s" , &s[i].Name);
        printf("Enter Percentage of %d student: \n", i+1);
        scanf("%f", &s[i].Percentage);
        
    }
    for(int i = 0; i<= 4; i++){
        for(int j = i+1; j <= 4 ; j++){
            if(s[j].Percentage < s[i].Percentage){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i<= 4; i++){
        printf("%s\t%d\t%f" , s[i].Name , s[i].Roll_no , s[i].Percentage);
        printf("\n");
    }
    return 0;
}