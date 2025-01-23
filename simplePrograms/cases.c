#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter Your Grade: ");
    scanf("%c", &grade);

    switch (grade){

    case 'A' :
        printf("Great!\n");
        break;

    case 'B' :
        printf("Good!\n");
        break;

    case 'C' :
        printf("Bad!\n");
        break;
  
    default:
        printf("Enter default value\n");
        break;
    }

    return 0;
} 
/*if there is no break in this code, there will be no stops the output will be 
    Great
    Good
    Bad
    Enter default value



*/