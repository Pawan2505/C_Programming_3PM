#include <stdio.h>
#define PI 3.14   // Macro constant (global)

int main() {
    // PI = 34.56;   // Not allowed, macros are not variables

    printf("The value of PI : %.2f\n", PI);
    return 0;
}
