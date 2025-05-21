#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  int n, randnum;
  randnum = (rand() % 10)+1;

  do{
    printf("GUESS: ");
    scanf("%d", &n);

    if (n > randnum){

      printf("Too High!");
    }

    else if (n < randnum){

      printf("too Low!");
    }

    else if (n == randnum) {
      printf("Congrads!\n");
      break;
    }

  } while (n != 0);



  return 0;
}
