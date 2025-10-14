// Demonstrating operator precedence and associativity

#include<stdio.h>

int main(){
    int a = 10, b = 5, c = 2;
    
    printf("a + b * c = %d\n", a + b * c);       // 10 + (5*2) = 20
    printf("(a + b) * c = %d\n", (a + b) * c);   // (10+5)*2 = 30
    printf("a * b / c = %d\n", a * b / c);       // (10*5)/2 = 25
    printf("a / b * c = %d\n", a / b * c);       // (10/5)*2 = 4
    
    return 0;
}