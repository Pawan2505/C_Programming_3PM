#include <iostream>
using namespace std;

class A {
public:
    int age;

    void display() {
        cout << "Class A..." << endl;
        cout << "Age : " << age << endl;
    }
};

class B : public A {
};

int main() {

    A a;
    a.age = 25;
    a.display();

    B b;
    b.age = 22;     // Allowed
    b.display();    // Allowed

    return 0;
}
