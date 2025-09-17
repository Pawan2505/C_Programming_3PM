#include <stdio.h>

int main() {
    const int num;     // Not allowed: const must be initialized
    // num = 100;      // Cannot assign later

    printf("Num is : %d\n", num);  // Compilation error
    return 0;
}
