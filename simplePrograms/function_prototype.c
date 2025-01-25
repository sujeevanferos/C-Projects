#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{

    char name[] = "sujeevan";
    int age = 22;
    hello(name, age);
    return 0;

}

void hello(char name[], int age)
{

    printf("\nHello %s, you are %d years old!!\n", name, age);

}