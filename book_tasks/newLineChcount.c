#include <stdio.h>


int main()
{
  long nc = 0;
  int c;
  while((c = getchar()) != EOF)

    if(c == '\n')
      nc++;
    
  printf("%ld\n", nc);


  return 0;
}
