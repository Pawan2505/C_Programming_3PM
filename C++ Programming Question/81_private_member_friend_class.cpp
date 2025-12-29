#include <iostream>
using namespace std;

class A {
private:
    void display() {
        cout << "Class A..." << endl;
    }

    // Friend declaration
    friend class B;
};

class B : public A {
public:
    void data() {
        display();   // ✅ Allowed because B is friend
    }
};

int main() {

    B b;
    b.data();   // ✅ Works

    return 0;
}
