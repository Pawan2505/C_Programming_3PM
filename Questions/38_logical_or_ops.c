#include<stdio.h>

int main(){
    int num1 = 100;
    int num2 = 86;

    printf("%d\n",(num1<num2) || (num1>num2)); // 1: At least one true
    printf("%d\n",(num1>num2)  || (num1>=num2)); // 1: Both true
    printf("%d\n",(num1>=num2)  || (num1<=num2)); // 1: First condition true
    printf("%d\n",(num1<=num2)  || (num1==num2)); // 0: Both false
    printf("%d\n",(num1==num2)  || (num1!=num2)); // 1: Second condition true
    printf("%d\n",(num1!=num2)  || (num1>=num2)); // 1: Both true
    
    return 0;
}