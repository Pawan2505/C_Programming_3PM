#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int* age;

public:
    // Constructor
    Student(string name, int age1) {
        this->name = name;
        age = new int;
        *age = age1;

        cout << "Constructor called\n";
        cout << "Age address  : " << age << endl;
        cout << "Name address : " << &name << endl;
    }

    // ❌ Shallow copy constructor (for demonstration only)
    Student(const Student &obj) {
        cout << "Copy Constructor called\n";
        this->name = obj.name;
        this->age = obj.age;   // ❌ Shallow copy (dangerous)
    }

    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << *age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
        delete age;        // Free dynamically allocated memory
        age = nullptr;    // Prevent dangling pointer
    }
};

int main() {

    Student obj1("Ashish", 20);
    obj1.getDetails();

    cout << "\nCopy constructor:\n";

    Student obj2 = obj1;
    obj2.getDetails();

    return 0;
}
