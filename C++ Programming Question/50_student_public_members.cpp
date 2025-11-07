#include<iostream>
using namespace std;

// Create class
class Student {
public: // Accessible from anywhere

    // Data members
    string name;
    int age;

    // Member functions
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    int details() {
        cout << "Noice very high!" << endl;
        return 0; // since return type is int
    }
};

int main() {
    Student ashish;  // Create object

    // Access and modify public data members
    ashish.name = "Ashu"; // ok
    ashish.age = 14;      // ok

    // Call member functions
    ashish.display();   
    ashish.details();   
}
