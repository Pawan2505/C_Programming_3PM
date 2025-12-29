#include <iostream>
using namespace std;

// Class creation
class Student {
public:   // Accessible from anywhere

    // Data members
    string name;
    int age;

    // Member function
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }

    void details() {
        cout << "Noise very high!" << endl;
    }
};

int main() {

    // Object creation
    Student ashish;

    // Assigning values directly (because public)
    ashish.name = "Ashu";
    ashish.age = 14;

    // Calling member functions
    ashish.display();
    ashish.details();

    return 0;
}
