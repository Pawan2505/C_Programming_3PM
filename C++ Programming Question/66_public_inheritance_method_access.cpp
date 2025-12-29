#include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    void display() {
        cout << "Parent class!" << endl;
    }
};

// Child class
class Child : public Parent {
};

int main() {

    Child ch;

    // Child object accessing parent public method
    ch.display();   // ✅ Allowed

    return 0;
}
