// Purpose: Demonstrate global variables and namespaces in C++

#include <iostream>
using namespace std;

// Global variable
int num1 = 100;

// Namespace 'na'
namespace na {
    int num1 = 34;
}

// Namespace 'nb'
namespace nb {
    int num1 = 340;
}

int main() {

    int num1, num2;  // Local variables

    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Local num1 : " << num1 << endl;
    cout << "Global ::num1 : " << ::num1 << endl;
    cout << "Local num2 : " << num2 << endl;
    cout << "Namespace na::num1 : " << na::num1 << endl;
    cout << "Namespace nb::num1 : " << nb::num1 << endl;

    return 0;
}