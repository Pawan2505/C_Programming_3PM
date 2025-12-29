#include <iostream>
using namespace std;

// ================= Parent Class =================
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

// ================= Child Class =================
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

// ================= SubChild Class =================
class SubChild : public Child {
public:
    // SubChild constructor calling Child constructor
    SubChild(string name, int age, int marks)
        : Child(name, age, marks) {}
};

int main() {

    Parent p1("Manish", 25);
    // p1.display();

    Child ch("Vivek", 22, 100);
    // ch.details();
    // ch.display();

    SubChild sub("Aakash", 26, 99);

    // Accessing methods from Parent & Child
    sub.details();   // From Child
    sub.display();   // From Parent

    return 0;
}
