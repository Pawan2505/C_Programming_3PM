#include<iostream>
using namespace std;

// Create class
class Student {
private:  // Data members are private
    string name;
    int age;

public: // Member functions are public
    void display() {
        cout << "Hello Student!" << endl;
    }

    int details() {
        cout << "Noice very high!" << endl;
        return 0; // since return type is int
    }
};

int main() {
    Student ashish;  // Create object

    ashish.display();   // ok
    ashish.details();   // ok

    // ashish.name = "Ashu"; // Not allowed, name is private
    // ashish.age = 14;      // Not allowed, age is private
}
