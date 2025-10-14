// Purpose: Demonstrate use of string, bool, and sizeof operator in C++

#include <iostream>
using namespace std;

int main() {

    string name = "Pawan Maurya";
    cout << "Name: " << name << endl;

    cout << "Size of 'name' variable: " << sizeof(name) << " bytes" << endl;

    bool isPresent = 0;  // false
    cout << "Boolean value (isPresent): " << isPresent << endl;

    return 0;
}