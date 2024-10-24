#include <stdio.h>

// pass by reference
void modifyingNumber(int *number){
    *number += 100;

}

// pass by value
int notmodifyingNumber(int number){
    number += 100;

    return number;
}

int main() {
    
    int originalNumber = 25;
    printf("Original Number is: %d \n", originalNumber);

    modifyingNumber(&originalNumber);
    printf("Modified Number is: %d \n", originalNumber);

    int new = notmodifyingNumber(originalNumber);
    printf("Not modified Number is: %d \n", new);


    return 0;
}