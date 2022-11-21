#include<stdio.h>
int main()
{
    int rn[10], mks[10],temp_rn,temp_mks,i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the Roll no and Marks of a student%d :",i+1);
        scanf("%d%d",&rn[i],&mks[i]);
    } 
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
        {
            if(mks[j]<mks[j+1])
            {
                temp_mks=mks[j];
                mks[j]=mks[j+1];
                mks[j+1]=temp_mks;

                temp_rn=rn[j];
                rn[j]=rn[j+1];
                rn[j+1]=temp_rn;

            }
        }
    for(i=0;i<10;i++)
    {
        printf("Roll no : %d\n",rn[i]);
        printf("Marks : %d\n",mks[i]);
        printf("\n");
    }
}