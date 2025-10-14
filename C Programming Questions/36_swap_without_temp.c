#include<stdio.h>

int main(){
    int x = 10;
    int y = 20;

    printf("Before swap - x: %d, y: %d\n", x, y);
    
    x = x + y; // x becomes 30 (10 + 20)
    y = x - y; // y becomes 10 (30 - 20)
    x = x - y; // x becomes 20 (30 - 10)

    printf("After swap - x: %d, y: %d\n", x, y);
    
    return 0;
}