#include <stdio.h>
#define PI 3.14        // Macro constant
#define NAME "Pawan"   // Macro string constant

int main() {
    int num;

    printf("Size of num is   : %zu bytes\n", sizeof(num));
    printf("Size of PI is    : %zu bytes\n", sizeof(PI));    // evaluates to sizeof(double)
    printf("Size of NAME is  : %zu bytes\n", sizeof(NAME));  // evaluates to sizeof(pointer to string literal)
    printf("The value of PI  : %.2f\n", PI);
    printf("The value of NAME: %s\n", NAME);

    return 0;
}
