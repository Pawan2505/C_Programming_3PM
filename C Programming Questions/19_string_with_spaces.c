// taking string input with spaces using scanf() with %[^\n]s

#include<stdio.h>

int main(){
   
    char username[15];

    printf("Enter username : ");

    scanf("%[^\n]s",username); // Note: removed & for array

    printf("The username is : %s",username);

    return 0;
}