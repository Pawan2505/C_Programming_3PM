#include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    string name;
    int age;

    // Parent constructor
    Parent(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Parent class!" << endl;
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Child class
class Child : public Parent {
public:
    int marks;

    // Child constructor calling Parent constructor
    Child(string name, int age, int marks)
        : Parent(name, age) {

        this->marks = marks;
    }

    void details() {
        cout << "Child class!" << endl;
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {

    Child ch("Vivek", 22, 100);

    ch.details();   // Child method
    ch.display();   // Parent method

    return 0;
}
