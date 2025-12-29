#include <iostream>
using namespace std;

// Class template
template <typename T1, typename T2>
class A {
public:
    T1 name;
    T2 age;

    A(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main() {

    // Creating object with specific data types
    A<string, int> a("Pawan", 24);

    a.display();

    return 0;
}
