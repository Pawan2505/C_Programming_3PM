#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A..." << endl;
    }
};

class B : protected A {
public:
    void details() {
        display();  // Allowed inside child
    }
};

int main() {

    B b;
    b.details();   // Allowed

    // b.display(); ❌ Not allowed (protected in B)

    return 0;
}
