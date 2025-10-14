#include <stdio.h>

int main() {
    printf("Size of int            : %zu bytes\n", sizeof(int));
    printf("Size of float          : %zu bytes\n", sizeof(float));
    printf("Size of double         : %zu bytes\n", sizeof(double));
    printf("Size of char           : %zu bytes\n", sizeof(char));
    printf("Size of short int      : %zu bytes\n", sizeof(short int));
    printf("Size of long int       : %zu bytes\n", sizeof(long int));
    printf("Size of long long int  : %zu bytes\n", sizeof(long long int));
    printf("Size of signed int     : %zu bytes\n", sizeof(signed int));
    printf("Size of unsigned int   : %zu bytes\n", sizeof(unsigned int));
    // printf("Size of void         : %zu bytes\n", sizeof(void)); //  Not valid
    printf("Size of size_t         : %zu bytes\n", sizeof(size_t));
    printf("Size of wchar_t        : %zu bytes\n", sizeof(wchar_t));

    double num = 20;
    printf("Size of num (double)   : %zu bytes\n", sizeof(num));

    return 0;
}
