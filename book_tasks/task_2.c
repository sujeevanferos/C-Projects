#include <stdio.h>

int main()
{
  /*previous table but with for loop*/
  float far;

  for(far = 0; far <= 300; far+=20)
  {
    printf("%3.1f %6.1f\n", far, 5.0/9.0*(far-32));
  }

  return 0;
}
