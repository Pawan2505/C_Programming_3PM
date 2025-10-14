// Purpose: Perform basic arithmetic operations using switch case

#include <stdio.h>

int main() {

    int x, y;
    char ops;

    printf("Enter expression (e.g., 10 + 5): ");
    scanf("%d %c %d", &x, &ops, &y);

    switch (ops) {
        case '+':
            printf("Add : %d\n", x + y);
            break;

        case '-':
            printf("Sub : %d\n", x - y);
            break;

        case '*':
            printf("Mul : %d\n", x * y);
            break;

        case '/':
            printf("Div : %d\n", x / y);
            break;

        case '%':
            printf("Rem : %d\n", x % y);
            break;

        default:
            printf("Please enter correct operator!\n");
    }

    return 0;
}