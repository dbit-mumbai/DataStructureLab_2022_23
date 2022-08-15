//program to store rollno and marks of 4 students and print marks in descending order
#include<stdio.h>

int main()
{
    int data[2][4];  //2d array
    int i, j, temp;  //declaration

    for(j = 0; j < 4; i++, j++)
    {
        printf("Enter Student Roll Number and Marks : ");
        scanf("%d %d", &data[0][j], &data[1][j]);          //input
    }

    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(data[1][i] < data[1][j])
            {
                temp = data[1][i];
                data[1][i] = data[1][j];
                data[1][j] = temp;

                temp = data[0][i];
                data[0][i] = data[0][j];
                data[0][j] = temp;

            }
        }
    }

    printf("Sorted Data : \n");

    for(j = 0; j < 4; j++)
    {
        printf("Roll No : %d, Marks : %d\n", data[0][j], data[1][j]);
    }

    return 0;
}