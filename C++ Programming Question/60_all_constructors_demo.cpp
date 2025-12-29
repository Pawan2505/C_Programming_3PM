#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1️⃣ Default constructor
    Student() {
        cout << "Default Constructor!" << endl;
        name = "Unknown";
        age = 0;
    }

    // 2️⃣ Parameterized constructor
    Student(string name, int age) {
        cout << "Parameterized Constructor!" << endl;
        this->name = name;
        this->age = age;
    }

    // 3️⃣ Copy constructor
    Student(const Student &obj) {
        cout << "Copy Constructor!" << endl;
        this->name = obj.name;
        this->age = obj.age;
    }

    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main() {

    // Calls parameterized constructor
    Student obj1("Ashish", 20);

    // Calls copy constructor
    Student obj2 = obj1;

    // Calls default constructor
    Student obj3;

    cout << "\nDetails of obj1:" << endl;
    obj1.getDetails();

    cout << "\nDetails of obj2:" << endl;
    obj2.getDetails();

    cout << "\nDetails of obj3:" << endl;
    obj3.getDetails();

    return 0;
}
