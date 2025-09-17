// pre-decrement and post-decrement operators

#include<stdio.h>
int main(){
    int a = 10;

    printf("The value of a is : %d\n",--a); // 9 (decrement then use)
    printf("The value of a is : %d\n",a++); // 9 (use then increment)
    printf("The value of a is : %d\n",--a); // 9 (decrement then use)
    
    return 0;
}