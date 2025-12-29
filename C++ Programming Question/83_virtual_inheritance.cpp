#include <iostream>
using namespace std;

// Base class
class A {
public:
    void display() {
        cout << "Class A ..." << endl;
    }
};

// First derived class
class B : virtual public A {
};

// Second derived class
class C : virtual public A {
};

// Final derived class (Diamond shape)
class D : public B, public C {
};

int main() {

    D d;
    d.display();   // ✅ No ambiguity

    return 0;
}
