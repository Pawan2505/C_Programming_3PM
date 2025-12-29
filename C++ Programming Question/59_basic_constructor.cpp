#include <iostream>
using namespace std;

// Class creation
class Student {
public:
    // Default constructor
    Student() {
        cout << "Hello Constructor!" << endl;
    }
};

int main() {

    // Object creation
    Student keval;   // Constructor automatically invoked

    return 0;
}
