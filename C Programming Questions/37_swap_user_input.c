#include<stdio.h>

int main(){
    int x;
    printf("Enter value of x : ");
    scanf("%d",&x);
    
    int y;
    printf("Enter value of y : ");
    scanf("%d",&y);

    // Swap without temporary variable
    x = x + y; // Step 1: Add both numbers
    y = x - y; // Step 2: Subtract y from sum to get original x
    x = x - y; // Step 3: Subtract original x from sum to get original y

    printf("The value of x : %d\n",x);
    printf("The value of y : %d\n",y);
    
    return 0;
}