// taking character input

#include<stdio.h>

int main(){
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch); // space before %c to skip whitespace
    
    printf("You entered: %c\n", ch);
    printf("ASCII value: %d\n", ch);
    
    return 0;
}