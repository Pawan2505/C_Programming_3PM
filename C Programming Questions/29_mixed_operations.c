// operations with increment/decrement operators

#include<stdio.h>

int main(){
    int a = 5, b = 3;
    
    printf("Initial values: a = %d, b = %d\n", a, b);
    printf("a++ + ++b = %d\n", a++ + ++b); // 5 + 4 = 9
    printf("After operation: a = %d, b = %d\n", a, b);
    
    a = 5; b = 3; // reset values
    printf("\n--a + b-- = %d\n", --a + b--); // 4 + 3 = 7
    printf("After operation: a = %d, b = %d\n", a, b);
    
    return 0;
}