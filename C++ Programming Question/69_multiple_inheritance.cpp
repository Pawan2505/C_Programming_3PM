#include <iostream>
using namespace std;

// ================= Parent Class 1 =================
class Parent {
public:
    string name;
    int age;

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

// ================= Parent Class 2 =================
class ParentTwo {
public:
    int id;

    ParentTwo(int id) {
        this->id = id;
    }

    void viewDetails() {
        cout << "ParentTwo class!" << endl;
        cout << "ID : " << id << endl;
    }
};

// ================= Child Class =================
class Child : public Parent, public ParentTwo {
public:
    int marks;

    // Child constructor calling both parent constructors
    Child(string name, int age, int marks, int id)
        : Parent(name, age), ParentTwo(id) {

        this->marks = marks;
    }

    void details() {
        cout << "Child class!" << endl;
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
        cout << "ID    : " << id << endl;
    }
};

int main() {

    Child ch("Vivek", 22, 100, 1);

    // Accessing methods from both parents
    ch.viewDetails();   // From ParentTwo
    ch.display();       // From Parent
    ch.details();       // From Child

    return 0;
}
