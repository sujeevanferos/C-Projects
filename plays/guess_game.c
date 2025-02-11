#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min;
    int max;
    int guess;
    int guesses = 0;
    int answer;
    int score = 1000;

    printf(
        "\n"
        "This is a simple game \n"
        "Enter the 1st value as your lower point and 2nd number as the maximum point of your  guessing range \n"
        "CAUTION! Long ranges caues low accuracy \n"
        "So play well :) \n"
        "\n"
    );

    printf("Enter first number: ");
    scanf("%d", &min);

    printf("Enter second number: ");
    scanf("%d", &max);

    srand(time(0));
    answer = (rand() % max) + min - 1;

    while( score > 0)
    {

        guesses++;
        score -= 10;

        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > answer)
        {
            printf("High\n");
        }

        else if (guess < answer)
        {
            printf("Low\n");
        }

        else
        {
            printf("Correct answer!\n");
            break;
        }

    }

    printf("The answer is: %d \n", answer);
    printf("Guesses: %d\n", guesses);
    printf("Your score: %d\n", score);
    
    return 0;
}
