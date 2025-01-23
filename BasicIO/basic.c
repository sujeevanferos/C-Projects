#include <stdio.h>
#include <string.h>
int main(){

    int age;
    char name[50];

    printf("\nEnter Your Name: ");
    //scanf("%s", name); =====> this will not accept spaces
    fgets(name, 25, stdin); //====> use this for getting space between the 1st and last name:)
    name[strlen(name)-1] = '\0'; //====> this is for avoid the line break during the fgets function works

    printf("\nEnter Your Age: ");
    scanf("%d", &age);
    printf("Hello %s! You are %d years old dude!",name, age);

    return 0;

}
