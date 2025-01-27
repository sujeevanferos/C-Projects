#include <stdio.h>


int main() 
{
    char ch;
    char s[4];
    char sen[100];
    
    scanf("%c\n", &ch);
    scanf("%s\n", s);
    fgets(sen, 100, stdin);
    
    printf("\n%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);

    return 0;
}