#include <iostream>
using namespace std;

// Abstract class
class Student {
public:
    // Pure virtual function
    virtual void add() = 0;

    // Normal member function
    void data() {
        cout << "Data function call..." << endl;
    }

    // Virtual destructor (best practice)
    virtual ~Student() {}
};

// Derived class
class Stud : public Student {
public:
    // Must override pure virtual function
    void add() override {
        cout << "Add function call..." << endl;
    }
};

int main() {

    // Base class pointer to derived class object
    Student* s1 = new Stud();

    s1->add();   // Derived class implementation
    s1->data();  // Base class function

    delete s1;

    return 0;
}
