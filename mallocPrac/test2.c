//learn  to use malloc for strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char* text;
  int max_length, tot_lenght;

  printf("Enter the size of the word: ");
  scanf(" %d", &max_length);

  tot_lenght = max_length + 1;
  text = (char*) malloc(tot_lenght * sizeof(char));

  if (text == NULL){
    printf("Mem Allocation is failed!\n");
    return 1;
  }

  getchar();

  printf("Enter a word: \n");
  fgets(text, tot_lenght, stdin);

  text[strcspn(text, "\n")] = '\0';

  printf("You entered %s\n", text);

  free(text);

  return 0;
}
