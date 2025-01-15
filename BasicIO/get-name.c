#include <stdio.h>

int main() {
    char name[50];  // Declare a character array to store the input

    // Ask for user input
    printf("Enter your name: ");
    scanf("%49s", name);  // Read input from the user (up to 49 characters to avoid buffer overflow)

    // Print the output
    printf("Hello, %s!\n", name);

    return 0;
}

