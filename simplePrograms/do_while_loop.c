#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    do{ // while loop ===> 1st check the condition then execute the code
        // do while loop ===> execute the code then check the condition !
        printf("Enter a number > 0: ");
        scanf("%d", &number);

        if(number > 0)
        {
            sum += number;
        }

    }while(number > 0);

    printf("Total of the numbers is: %d\n", sum);
}
