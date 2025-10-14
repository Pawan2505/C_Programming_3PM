// Purpose: Demonstrate nested if statements for grade calculation

#include <stdio.h>

int main() {

    float marks;

    printf("Enter Marks : ");
    scanf("%f", &marks);

    if (marks >= 80) {
        if (marks >= 90) {
            printf("Grade A\n");
        } else {
            printf("Grade B\n");
        }
    } else {
        printf("Sorry, You are rejected!\n");
    }

    return 0;
}