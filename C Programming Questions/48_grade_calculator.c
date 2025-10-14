// Purpose: Calculate grade based on marks using if-else ladder

#include <stdio.h>

int main() {

    float marks;

    printf("Enter Marks : ");
    scanf("%f", &marks);

    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 80) {
        printf("Grade B\n");
    } else if (marks >= 70) {
        printf("Grade C\n");
    } else {
        printf("Sorry, You are rejected!\n");
    }

    return 0;
}