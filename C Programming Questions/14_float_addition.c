// using scanf() with float variables and performing addition

#include<stdio.h>

int main(){
    float num1;
    float num2;

    printf("Please enter num1 : ");
    scanf("%f",&num1);

    printf("Please enter num2 : ");
    scanf("%f",&num2);

    printf("Sum of num1 and num2 is : %0.2f",num1+num2);
    
    return 0;
}