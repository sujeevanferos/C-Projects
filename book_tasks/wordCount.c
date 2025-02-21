#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int nw, nl, nc, c, state;

  state = OUT;

  while((c = getchar()) != EOF)
  {
    nc++;

    if(c == '\n')
    {
      nl++;
    }

    if(c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }

    else if(state == OUT) 
    {
      state = IN;
      nw++;
    }

  }

  printf("\n%d %d %d \n", nw, nl, nc);


  return 0;
}
