#include <stdio.h>

int main()
{
    unsigned long long num;
    printf("Enter any number: ");
    scanf("%llu", &num);
    while (1){
        
        if(num % 2 == 0)
        {
            num /= 2;

        }

        else
        {
            num = num*3+1;
        }

    printf("%llu\n", num);

    }
    
}