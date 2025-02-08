// generate some random numbers with C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // this will use current time as seed for random numbers!

    int num1 = (rand() % 6) + 1;

    printf("You got %d \n", num1);  //this will print a random number between 1 and 6




    return 0;

}