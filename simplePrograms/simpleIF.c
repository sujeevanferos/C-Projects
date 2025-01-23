#include <stdio.h>
#include <math.h>

int main()
{
    int age;
    
    printf("Enter Youra Age: ");
    scanf("%d", &age);

    if(age >= 18){
      printf("You are eligible\n");
    }

    else if(age == 0){
      printf("You are just born MF\n");
    }

    else if(age < 0){
      printf("You have not been born yet MF!\n");
    }

    else{
      printf("You are not eligible\n");
    }

    return 0;

}
