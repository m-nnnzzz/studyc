#include <stdio.h>

int main() {
    char name[50] = "";
    int age = 0;

    // Ask for the user's name
    printf("Enter your name: ");

    // Read the input from the user and store it in the 'name' variable
    fgets(name, sizeof(name), stdin); // fgets is used to handle spaces in names

    // Ask for the user's age
    printf("Enter your age: ");
    // Read the input for age and store it in the 'age' variable
    scanf("%d", &age);

    // Clear the input buffer to consume the leftover newline character
    while (getchar() != '\n');


    // Output the collected information
    printf("Hello, %s", name); // 'fgets' includes the newline character, so no need to add \n here
    printf("You are %d years old.\n", age);

    return 0;
}