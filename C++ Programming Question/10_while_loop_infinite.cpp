// Purpose: Demonstrate an infinite while loop example

#include <iostream>
using namespace std;

int main() {

    int num = 1;

    // This loop runs infinitely because condition is always true
    while (num > 0) {
        cout << num << endl;
        num++;
    }

    return 0;
}