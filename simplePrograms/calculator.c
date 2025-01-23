#include <stdio.h>
#include <stdbool.h>
// do calculations only for 2 numbers !
// Logical Operators =====>
// && - and, || - or, ! - not

int main(){

    char operator;
    double num1;
    double num2;
    double ans;

    printf("Enter the operation: (+), (-), (*), (/) ");
    scanf("%c", &operator);
    
    /*if(operator == + || operator == - || operator == * || operator == /){

        printf("Continue..");
    }

    else{
        printf("Enter a valid operator!");
    }*/

    printf("Enter number 1: \n");
    scanf("%lf", &num1);

    printf("Enter number 2: \n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        ans = num1 + num2;
        printf("The answer is, %.1lf\n", ans);

        break;
    
    case '-':
        ans = num1 - num2;
        printf("The answer is, %.1lf\n", ans);

        break;
    case '*':
        ans = num1 * num2;
        printf("The answer is, %.1lf\n", ans);

        break;
    case '/':
        ans = num1 / num2;
        printf("The answer is, %.1lf\n", ans);

        break;
    
    default:
        printf("Enter a valid operator!\n");
        break;
    }




    return 0;
}