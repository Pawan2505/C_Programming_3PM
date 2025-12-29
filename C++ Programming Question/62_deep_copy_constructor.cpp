#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int* age;   // Pointer data member (dynamic memory)

public:
    // Parameterized constructor
    Student(string name, int age1) {
        this->name = name;
        age = new int;
        *age = age1;

        cout << "Constructor called" << endl;
        cout << "Age address  : " << age << endl;
        cout << "Name address : " << &name << endl;
    }

    // Copy constructor (DEEP COPY)
    Student(const Student &obj) {
        cout << "Copy Constructor (Deep Copy)!" << endl;
        this->name = obj.name;

        age = new int;          // New memory allocation
        *age = *obj.age;        // Copy actual value

        cout << "Age address  : " << age << endl;
        cout << "Name address : " << &name << endl;
    }

    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << *age << endl;
    }

    // Destructor (VERY IMPORTANT)
    ~Student() {
        delete age;
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
