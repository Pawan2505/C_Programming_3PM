#include <iostream>
using namespace std;

// Base class
class Student {
public:
    // Virtual function
    virtual int data(int x, int y) {
        cout << "Student class method" << endl;
        return x + y;
    }
};

// Derived class
class Stud : public Student {
public:
    // Overriding base class method
    int data(int x, int y) override {
        cout << "Stud class method" << endl;
        return x + y;
    }
};

int main() {

    Stud st;

    cout << "st.data(10, 20) : " << st.data(10, 20) << endl;

    return 0;
}
