// Purpose: Check voting eligibility using the ternary operator

#include <stdio.h>

int main() {

    int age = 4;

    (age >= 18) ? 
        printf("You are eligible to vote!\n") : 
        printf("You are not eligible to vote!\n");

    return 0;
}