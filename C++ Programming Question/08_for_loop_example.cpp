// Purpose: Demonstrate the use of for loop to print numbers from 1 to 10

#include <iostream>
using namespace std;

int main() {

    // for(initialization; condition; increment/decrement)
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
        // or: printf("%d\n", i);
    }

    return 0;
}