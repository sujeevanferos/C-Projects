#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs your temperature in (F) or (C) ?");
    scanf(" %c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){

        printf("Enter the value of the Temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp *9 /5) + 32;
        printf("\nThe temperature is %.1fF\n", temp);
    }

    else if (unit == 'F'){

        printf("Enter the value of the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp -32) * 5) / 9;
        printf("\nThe temperature is %.1fC\n", temp);

    }
    

    return 0;
}