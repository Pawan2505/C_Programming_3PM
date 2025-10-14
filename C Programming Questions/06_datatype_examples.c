#include <stdio.h>

int main() {
    long int phone = 5678464;
    printf("Long int : %ld\n", phone);   // use %ld for long int

    char ch = 'a';  // single quotes for char
    printf("Char value : %c\n", ch);

    char str[] = "Pawan Maurya"; // string = array of characters
    printf("Username (str) : %s\n", str);

    float pi = 3.14f; // float literal with f suffix
    printf("PI is : %.2f\n", pi);

    double price = 123543432.2453456;
    printf("Price : %.7lf\n", price);

    return 0;
}
