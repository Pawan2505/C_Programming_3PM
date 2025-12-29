#include <iostream>
using namespace std;

// ================= Class A =================
class A {
public:
    void display() {
        cout << "Class A..." << endl;
    }
};

// ================= Class B =================
// public → private
class B : private A {
public:
    void details() {
        display();   // ✅ Allowed
    }
};

// ================= Class C =================
// Trying to inherit further
class C : protected B {
public:
    void data() {
        // display(); ❌ NOT allowed
    }
};

int main() {

    B b;
    b.details();   // ✅ Allowed

    C c;
    // c.data();   // ❌ ERROR (display not available)

    return 0;
}
