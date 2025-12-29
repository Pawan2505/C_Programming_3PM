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
// public → protected
class B : protected A {
public:
    void details() {
        display();   // ✅ Allowed (inside class)
    }
};

// ================= Class C =================
// protected → protected
class C : protected B {
public:
    void data() {
        display();   // ✅ Allowed (still protected in inheritance chain)
    }
};

int main() {

    // A a;
    // a.display();   // ❌ Not related to protected issue

    B b;
    // b.display();   // ❌ NOT allowed (display is protected in B)

    C c;
    c.data();        // ✅ Allowed

    return 0;
}
