#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];

    printf("Enter Your Name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("You did not enter your name!!!\n");
        printf("Enter Your Name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
       
    }
    
    
    printf("Hello %s\n", name);
}