// Purpose: Demonstrate multiple independent if statements

#include <stdio.h>

int main() {

    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!\n");
    }

    if (age >= 18) {
        printf("You can watch movie or web series!\n");
    }

    return 0;
}