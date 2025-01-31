#include <stdio.h>
#include <string.h>

int main()
{
    char x = 'x';
    char y = 'y';
    char w[20] = "water";
    char l[20] = "soda";

    char tempchar;
    char templiq[20];

    tempchar = x;
    x = y;
    y = tempchar;

    strcpy(templiq, w);
    strcpy(w, l);
    strcpy(l, templiq);

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    printf("w = %s\n", w);
    printf("l = %s\n", l);

    return 0;
}