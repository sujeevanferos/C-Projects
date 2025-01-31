#include <stdio.h>

int main()
{   
    int a;
    int b;
    float c;
    float d;
    int e;
    int f;
    float g;
    float h;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
     
    e = a + b;
    f = a - b;
    g = c + d;
    h = c - d;
    
    printf("%d %d", e, f);
    printf("%.1f %.1f", g, h);
    
    return 0;
}