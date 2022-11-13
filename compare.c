#include<stdio.h>

int main()
{
    int a[10][10],b[10][10], r, c,i,j,k,l,t,y;
    printf("Enters rows and columns : ");
    scanf("%d %d", &r,&c);

    printf("Enters rows and columns : ");
    scanf("%d %d", &t,&y);

    printf("Enter the elements to be compared:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements to be compared:\n");
    for(int k=0;k<t;k++)
    {
        for(int l=0;l<y;l++)
        {
           printf("Enter element a[%d][%d] : ",k+1,l+1);
            scanf("%d",&b[k][l]);
        }
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            for ( k = 0; k < t; k++)
            {
                for ( l = 0; l < y; l++)
                {
                    if(a[i][j] == b[k][l]){

                     printf("1");

                    }else {

                             printf("0");
                            }
                }
                
            }
            
        }
        
    }

    
}