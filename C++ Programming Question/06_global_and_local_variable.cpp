// Purpose: Demonstrate difference between global and local variables in C++

#include <iostream>
using namespace std;

int num1 = 100;  // Global variable

int main() {

    int num1, num2;  // Local variables

    cout << "Please enter values for num1 and num2: ";
    cin >> num1 >> num2;

    cout << "The value of local num1 is : " << num1 << endl;
    cout << "The value of global ::num1 is : " << ::num1 << endl;
    cout << "The value of num2 is : " << num2 << endl;

    return 0;
}