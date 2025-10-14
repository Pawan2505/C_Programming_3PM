#include<stdio.h>

int main(){
    int num1 = 100;
    int num2 = 86;

    printf("%d\n",!((num1<num2) || (num1>num2))); // 0: NOT of (false OR true)
    printf("%d\n",!((num1>num2)  && (num1>=num2))); // 0: NOT of (true AND true)
    printf("%d\n",!((num1>=num2)  || (num1<=num2))); // 0: NOT of (true OR false)
    printf("%d\n",!((num1<=num2)  && (num1==num2))); // 1: NOT of (false AND false)
    printf("%d\n",!((num1==num2)  || (num1!=num2))); // 0: NOT of (false OR true)
    printf("%d\n",!((num1!=num2)  || (num1>=num2))); // 0: NOT of (true OR true)
    
    return 0;
}