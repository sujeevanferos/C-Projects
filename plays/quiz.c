#include <stdio.h>
#include <ctype.h>

int main()
{
  char questions[][100] = {
    "1. What is the year",
    "2. Who created C",
    "3. What is the processor of C"
  };

  char options[][100] = {
    "A. 1969", "B. 1972", "C. 1975", "D. 1999",
    "A. Dennis", "B. Nikola", "C. John", "D. Doc",
    "A. Obj C", "B. B", "C. C++", "D. C#",
  };
 
  char answers[3] = {'B', 'A', 'B'};

  int numberofQuestions = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score = 0;

  printf("Quiz-Game\n");

  for (int i = 0; i < numberofQuestions; i++)
  {
    printf("%s\n", questions[i]);

    for (int j = (i*4); j < (i*4+4); j++)
    {
      printf("%s\n", options[j]);
    }

    printf("guess: \n");
    scanf(" %c", &guess);
    guess = toupper(guess);

    if (guess == answers[i])
    {
      printf("Correct! \n");
      score++;
    }
    else 
    {
    printf("Wrong! \n");
    }

  }

  printf("Final Score :%d/%d\n", score, numberofQuestions);


  return 0;
}
