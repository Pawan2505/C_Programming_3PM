#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int* age;   // Pointer data member

    // Parameterized constructor
    Student(string name, int age1) {
        this->name = name;
        age = new int;          // Dynamic memory allocation
        *age = age1;

        cout << "Constructor called\n";
        cout << "Age address  : " << age << endl;
        cout << "Name address : " << &name << endl;
    }

    // ❌ Shallow Copy Constructor
    Student(const Student &obj) {
        cout << "Copy Constructor (Shallow Copy)\n";
        this->name = obj.name;

        // ❌ Same memory address copied
        this->age = obj.age;

        cout << "Age address  : " << age << endl;
        cout << "Name address : " << &name << endl;
    }

    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << *age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
        delete age;   // ❌ Double delete problem will happen
    }
};

int main() {

    Student obj1("Ashish", 20);
    obj1.getDetails();

    cout << "\nCopy constructor:\n";

    Student obj2 = obj1;   // Shallow copy
    obj2.getDetails();

    return 0;
}
