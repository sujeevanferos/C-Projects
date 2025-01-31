#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][12] = {
        "Mustang",
        "BMW",
        "Benz",
        "Audi",
        "Lamborghini"
    };

    //printf("%d bytes\n", sizeof(cars));

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    
    return 0;
}