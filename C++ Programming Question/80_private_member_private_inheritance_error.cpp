#include <iostream>
using namespace std;

class A {
private:
    void display() {
        cout << "Class A..." << endl;
    }
};

class B : private A {
public:
    void data() {
        // display();  // ❌ ERROR
    }
};

int main() {

    B b;
    // b.data();  // ❌ Will not compile

    return 0;
}
