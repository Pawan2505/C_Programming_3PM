#include <stdio.h>

int main() {
    const int num = 10;   // Local constant -> must initialize at declaration
    // num = 200;         //  Not allowed (cannot change a constant)

    printf("Num is : %d\n", num);
    return 0;
}
