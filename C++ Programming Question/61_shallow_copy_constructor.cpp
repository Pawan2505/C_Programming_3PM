#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int marks;

public:
    // Default constructor
    Student() {
        name = "Pawan";
        age = 25;
        marks = 100;
    }

    // Parameterized constructor
    Student(string name, int age) {
        cout << "Parameterized Constructor!" << endl;
        this->name = name;
        this->age = age;
        this->marks = 100;
    }

    // Copy constructor (SHALLOW COPY)
    Student(const Student &obj) {
        cout << "Copy Constructor (Shallow Copy)!" << endl;
        this->name = obj.name;
        this->age = obj.age;
        this->marks = obj.marks;
    }

    void getDetails() {
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {

    Student obj1("Ashish", 20);

    // Copy constructor called
    Student obj2 = obj1;

    obj2.getDetails();

    return 0;
}
