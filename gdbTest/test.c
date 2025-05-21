#include <stdio.h>

int square(int x)
{
  return x*x;
}

int main()
{
  int a = 5;
  int result = square(a);
  printf("result: %d\n", result);

  return 0;
}
