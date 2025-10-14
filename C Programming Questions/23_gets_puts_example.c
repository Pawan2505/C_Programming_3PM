// using gets() and puts() for string input/output
// Warning: gets() is dangerous and should not be used in production code

#include<stdio.h>

int main(){
   
    char username[15];

    printf("Enter username : ");

    gets(username);  // user input

    // printf("The username is : %s",username);

    puts(username);

    return 0;
}