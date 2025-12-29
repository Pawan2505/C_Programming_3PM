#include <iostream>
using namespace std;

class Student {
public:
    // Instance-level data members (each object has its own copy)
    string* name;
    int age;

    // Class-level data member (shared by all objects)
    static int marks;

    // Constructor (VERY IMPORTANT)
    Student() {
        name = nullptr;
        age = 0;
    }

    // Setter method
    // ❗ return type should be void
    void setDetails(string name1, int age1) {

        // Allocate memory only once
        if (name == nullptr) {
            name = new string;
        }

        *name = name1;
        age = age1;
    }

    // Getter method
    void getDetails() {
        cout << "Name  : " << *name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }

    // Static member function
    static void printStatic() {
        cout << "Static member function!" << endl;

        // ❌ Not allowed (no object context)
        // cout << age;
        // cout << *name;

        // ✅ Allowed
        cout << "Marks (static) : " << marks << endl;
    }

    // Destructor (MANDATORY because of dynamic memory)
    ~Student() {
        delete name;
        name = nullptr;
    }
};

// Static member initialization (outside class)
int Student::marks = 100;

int main() {

    // Array of objects
    Student students[3];

    students[0].setDetails("Viraj", 21);
    students[1].setDetails("Keval", 22);
    students[2].setDetails("Smit", 23);

    students[0].getDetails();
    students[1].getDetails();
    students[2].getDetails();

    // Calling static member function
    Student::printStatic();

    // Accessing static variable using class name
    cout << "Marks via class : " << Student::marks << endl;

    return 0;
}
