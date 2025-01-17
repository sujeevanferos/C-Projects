#include <stdio.h>

int main(){
    
    char name[50];
    int age;
    
    printf("enter your name and age\n");
    scanf("%49s",name);
    printf("enter the age\n");
    scanf("%d",&age);

    printf("your name is: %s and age: %d\n", name, age);
    
  

    return 0;
}
