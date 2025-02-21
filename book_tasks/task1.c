#include <stdio.h>

int main()
{
  double far, cel;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  far = lower;

  while(far <= upper)
  {
    cel = 5.0/9.0*(far-32);

    printf("%3.2f %6.2f\n", far, cel);

    far += step;

  }

  return 0;
}
