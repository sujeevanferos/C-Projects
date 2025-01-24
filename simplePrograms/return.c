#include <stdio.h>

double square(double x)
{
    return x * x;
}


int main()
{
    double x = square(8.90123);
    printf("%lf\n", x);

    return 0;
}