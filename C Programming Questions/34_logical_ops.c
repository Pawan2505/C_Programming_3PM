#include<stdio.h>

int main(){
    int num1 = 100;
    int num2 = 86;

    printf("%d\n",(num1<num2)&& (num1>num2)); // 0: AND needs both true
    printf("%d\n",(num1>num2) && (num1>=num2)); // 1: Both conditions true
    printf("%d\n",(num1>=num2) && (num1<=num2)); // 0: Second condition false
    printf("%d\n",(num1<=num2) && (num1==num2)); // 0: Both false
    printf("%d\n",(num1==num2) && (num1!=num2)); // 0: Contradictory conditions
    printf("%d\n",(num1!=num2) && (num1>=num2)); // 1: Both true
    
    return 0;
}