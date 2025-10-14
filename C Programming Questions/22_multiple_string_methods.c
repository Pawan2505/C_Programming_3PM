// Comparing different methods of string input in C

#include<stdio.h>
#include<string.h>

int main(){
   
    char str1[20], str2[20], str3[20];

    printf("Method 1 - scanf without spaces: ");
    scanf("%s", str1); // Reads until whitespace
    getchar(); // Clear input buffer
    
    printf("Method 2 - scanf with spaces: ");
    scanf("%[^\n]s", str2); // Reads until newline
    getchar(); // Clear input buffer
    
    printf("Method 3 - fgets (recommended): ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0'; // Remove newline

    printf("\nResults:\n");
    printf("scanf without spaces: %s\n", str1);
    printf("scanf with spaces: %s\n", str2);
    printf("fgets: %s\n", str3);

    return 0;
}