#include <iostream>
using namespace std;

// Function definition: takes two integers and returns their sum
int addition(int x, int y){
    return x + y;
}

int main() {
    int sum = addition(10, 20);  // Function call with arguments
    cout << "Sum of both numbers: " << sum << endl;
    return 0;
}
