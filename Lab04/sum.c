#include <stdio.h>
#include <math.h>

long long recursiveSumSkip(int b, int n, int k)
{
  if (n <= 0) return 0;

  else if (n % k != 0){
    return pow(b,n) + recursiveSumSkip(b, n-1, k);
  }
  else {
    return recursiveSumSkip(b, n-1, k);
  }
}

int main()
{

  return 0;
}
