// post-increment and pre-increment operators

#include<stdio.h>
int main(){
    int a = 10;

    printf("The value of a is : %d\n",a++); // 10 (use then increment)
    printf("The value of a is : %d\n",a++); // 11 (use then increment)

    printf("The value of a is : %d\n",++a); // 13 (increment then use)
    
    return 0;
}