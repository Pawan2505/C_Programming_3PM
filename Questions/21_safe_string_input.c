// Safer alternatives for string input in C
// Using fgets() instead of gets() or scanf() for safer input handling

#include<stdio.h>

int main(){
   
    char username[15];

    printf("Enter username : ");

    // fgets() is safer as it limits the input size
    fgets(username, sizeof(username), stdin);
    
    // Remove newline character if present
    if (username[strlen(username)-1] == '\n') {
        username[strlen(username)-1] = '\0';
    }

    printf("The username is : %s",username);

    return 0;
}