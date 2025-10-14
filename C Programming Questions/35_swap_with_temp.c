#include<stdio.h>

int main(){
    int x = 10;
    int y = 20;
    int temp; // Temporary variable for swapping

    printf("Before swap - x: %d, y: %d\n", x, y);
    
    temp = x; // Store x's value in temp
    x = y;    // Assign y's value to x
    y = temp; // Assign original x value (from temp) to y
    
    printf("After swap - x: %d, y: %d\n", x, y);
    printf("Temp value: %d\n", temp);
    
    return 0;
}