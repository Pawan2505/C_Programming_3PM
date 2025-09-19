#include<stdio.h>

int main(){
    int num1 = 100;
    int num2 = 86;

    printf("%d\n",(num1<num2));  // 0 (false) - 100 < 86?
    printf("%d\n",(num1>num2));  // 1 (true) - 100 > 86?
    printf("%d\n",(num1>=num2)); // 1 (true) - 100 ≥ 86?
    printf("%d\n",(num1<=num2)); // 0 (false) - 100 ≤ 86?
    printf("%d\n",(num1==num2)); // 0 (false) - 100 equals 86?
    printf("%d\n",(num1!=num2)); // 1 (true) - 100 not equal to 86?
    
    return 0;
}