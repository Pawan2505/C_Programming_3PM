// Purpose: Find the smallest number among three using nested ternary operator

#include <stdio.h>

int main() {

    int x = 50;
    int y = 40;
    int z = 102;

    (x < y && x < z) ? 
        printf("X is smallest!\n") : 
        (y < x && y < z) ? 
            printf("Y is smallest!\n") : 
            printf("Z is smallest!\n");

    return 0;
}