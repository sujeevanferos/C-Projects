#include <stdio.h>

int main()
{
    //2D array - an array, where each element is an array!
    //used to matrix , grid, table data

    int number[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = sizeof(number)/sizeof(number[0]);
    int coloumns = sizeof(number[0])/sizeof(number[0][0]);
    //that int number[3] indicates the maximum number of elemets inside the 2nd array and it is necessary
    // also we can use the below pattern to define a 2-D array

    /*
    
    number[0][0] = 1;
    number[0][1] = 2;
    number[0][2] = 3;
    number[1][0] = 4;
    number[1][1] = 5;
    number[1][2] = 6;
    number[2][0] = 7;
    number[2][1] = 8;
    number[2][2] = 9;
    
    */
    

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < coloumns; j++)
        {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    return 0;
}