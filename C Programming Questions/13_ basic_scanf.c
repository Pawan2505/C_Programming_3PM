// scanf() : It is used to take input from user. It is a function of stdio.h library. It is used to read formatted input from standard input (keyboard). It is used to read data of various types like int, float, char, string etc.
// syntax : scanf("format specifier",&variable_name);
// & -> address of operator -> it is used to get the address of a variable. It is used to store the input value at the address of the variable. It is used to pass the address of the variable to the scanf() function.

#include<stdio.h>

int main(){
    int marks; // variable declaration
    printf("Please enter your marks : ");
    scanf("%d",&marks); // user se input

    printf("Your marks is : %d",marks);
    return 0;
}