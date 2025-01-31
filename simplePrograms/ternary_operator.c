#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a  b;
}

int max_of_four(int a, int b, int c, int d)
{
    int maximum = max(max(a, b), max(c, d));
    return maximum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}