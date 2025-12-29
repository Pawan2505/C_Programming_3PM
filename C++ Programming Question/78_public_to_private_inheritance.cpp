#include <iostream>
using namespace std;

// ================= Parent Class =================
class A {
public:
    void display() {
        cout << "Class A..." << endl;
    }
};

// ================= Child Class =================
// public → private
class B : private A {
public:
    void details() {
        display();   // ✅ Allowed (inside class B)
    }
};

int main() {

    // A a;
    // a.display();   // ✅ Allowed (A ka object)

    B b;
    // b.display();   // ❌ NOT allowed (display is private in B)

    b.details();      // ✅ Allowed

    return 0;
}
