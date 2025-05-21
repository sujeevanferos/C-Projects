//these are iterative codes
#include <stdio.h>

int factorial1(int n1)
{
  int ans = 1;
  for(int i = 2; i <= n1; i++)
  {
    ans *= i;
  }
  return ans;
}

int factorial2(int n2)
{
  int ans2 = 1;
  while (n2 > 1)
  {
    ans2 *= n2;
    n2--;
  }
  return ans2;
}

int main()
{

  printf("");
  return 0;
}
