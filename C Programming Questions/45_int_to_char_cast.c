// Purpose: Demonstrate casting from int to char

#include <stdio.h>

int main() {

    int x = 65;  // ASCII value for 'A'
    char ch = (char)x;  // Type casting int to char

    printf("Character value of %d is : %c\n", x, ch);

    return 0;
}