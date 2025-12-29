#include <iostream>
using namespace std;

class Student {
private:
    // Instance level variables (each object has its own copy)
    string* name;
    int age;

    // Class level variable (shared by all objects)
    static int marks;

public:
    // Constructor (VERY IMPORTANT)
    Student() {
        name = nullptr;
        age = 0;
    }

    // Setter method
    void setDetails(string name1, int age1) {

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

    return 0;
}
