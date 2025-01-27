#include <stdio.h>

int main()
{
    int rows;
    int colomns;
    char symbol;

    printf("Enter the numbe of rows: \n");
    scanf("%d", &rows);

    printf("Enter the number of colomns: \n");
    scanf("%d", &colomns);

    printf("Enter a symbol: \n");
    scanf(" %c", &symbol);
    /*When you use scanf to read inputs like %d (integers), 
    it only consumes the number itself and leaves behind any whitespace characters (like newline \n, space ' ', or tab \t).
    If you then call scanf("%c") without a space, 
    it reads the leftover newline character from the buffer instead of waiting for a new character input.*/

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colomns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
 
    }
    return 0;

}