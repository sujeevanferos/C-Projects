// finding the factorial of the given arbitary integer
#include <stdio.h>

int fac(int n)
{
  if(n == 0)
  {
    return 1;
  }
  else {
    return n * fac(n - 1);
  }
}
//this method is called recursive method and it uses no loops but it calls itself and seems like a loop in the recur() function

//this function can calculate the Fibonacci number for the given number with recursive method
int fibb(int n)
{
  if (n < 2)
    return 1;
  else {
    return fibb(n-1) + fibb(n-2);
  }
}

int main()
{
  int x;
  printf("Enter number: ");
  scanf("%d", &x);

  printf("Factorial: %d\n", fac(x));
  printf("Fibonacci: %d\n", fibb(x));


  return 0;
}
