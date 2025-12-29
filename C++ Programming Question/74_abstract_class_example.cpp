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

    // Virtual destructor (good practice)
    virtual ~Student() {}
};

// Derived class
class Stud : public Student {
public:
    // Compulsory implementation
    void add() override {
        cout << "Add function call..." << endl;
    }
};

int main() {

    // Base class pointer, derived class object
    Student* s1 = new Stud();

    s1->add();   // Stud::add()
    s1->data();  // Student::data()

    delete s1;
    return 0;
}
