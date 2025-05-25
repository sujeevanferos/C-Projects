#include <stdio.h>


void hanoi(char source, char temp, char dest, int n)
{
  if (n > 0)
  {
    hanoi (source, dest, temp, n-1);
    printf("Move disk %d form peg %c to peg %c\n", n, source, dest);
    hanoi(temp, source, dest, n-1);
  }
}

int main()
{
  hanoi('A', 'B', 'C', 3);
  return 0;
}
