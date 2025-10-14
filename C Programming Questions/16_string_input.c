// taking string input using scanf()

#include<stdio.h>

int main(){
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name); // Note: no & for arrays/strings
    
    printf("Hello, %s!\n", name);
    
    return 0;
}