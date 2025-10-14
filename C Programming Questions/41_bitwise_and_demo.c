#include<stdio.h>

int main(){
    int num1 = 10;  // Binary: 1010
    int num2 = 5;   // Binary: 0101

    printf("10 and 5 bitwise AND : %d", num1 & num2); 
    // 1010 (10)
    // 0101 (5)
    // ----
    // 0000 (0)  - AND operation: 1 only if both bits are 1
    
    return 0;
}