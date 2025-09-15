#include <stdio.h>

int main() {
    int num = 100;   // Normal variable
    printf("The value of num is : %d\n", num);

    num = 300;       // ✅ Value can be updated
    printf("The value of num is : %d\n", num);

    return 0;
}
