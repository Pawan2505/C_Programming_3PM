#include <stdio.h>

int main() {
    int age;   // declaration
    // int age = 100; // Not allowed (redeclaration of same variable)
    printf("Your age is : %d\n", age); // Will print garbage value if not initialized
    return 0;
}
