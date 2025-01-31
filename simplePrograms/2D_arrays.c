#include <stdio.h>

int main()
{
    //2D array - an array, where each element is an array!
    //used to matrix , grid, table data

    int number[][3] = {
        {1,2,3},
        {4,5,6}
    };
    //that[3] indicates the maximum number of elemets inside the 2nd array
    // also we can use the below pattern to define a 2-D array

    /*number[0][0] = 1;
    number[0][1] = 2;
    number[0][2] = 3;
    number[1][0] = 4;
    number[1][1] = 5;
    number[1][2] = 6;*/
    

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    return 0;
}