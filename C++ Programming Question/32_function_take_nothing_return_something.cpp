#include <iostream>
using namespace std;

// Function declaration
int addition();

int main() {
    cout << "Sum of both numbers: " << addition() << endl;  // Function call
    return 0;
}

// Function definition
int addition() {
    int x = 20;
    int y = 300;
    return x + y;
}
