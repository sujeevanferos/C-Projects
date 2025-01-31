// a simple bubble sor alogrithm

#include <stdio.h>

void sort(char array[], int size)
{
    for(int i = 0; i < size-1; i ++)
    {
        for(int j = 0; j < size-1; j++)
        {

                if(array[j] > array[j+1])
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;

                }
        }
    }
}

void printArray(char array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}

int main()
{
    //int array[] = {1,5,3,7,8,9,2,4,6};
    char array[] = {'E', 'C', 'A', 'B', 'D'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    printf("\n");

    return 0;
}