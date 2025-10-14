// Purpose: Check if a person is eligible to vote using if-else statement

#include <stdio.h>

int main() {

    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote!\n");
    }

    return 0;
}