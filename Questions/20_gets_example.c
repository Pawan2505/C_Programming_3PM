// taking string input using gets() function
// Note: gets() is dangerous and should be avoided in production code
// due to buffer overflow vulnerabilities

#include<stdio.h>

int main(){
   
    char username[15];

    printf("Enter username : ");

    gets(username);  // user input

    printf("The username is : %s",username);

    return 0;
}