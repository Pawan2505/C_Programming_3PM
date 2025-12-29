#include <iostream>
using namespace std;

// Class creation
class Student {
private:
    string* name;   // Pointer data member
    int age;

public:
    // Constructor (VERY IMPORTANT)
    Student() {
        name = nullptr;
        age = 0;
    }

    // Setter method
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
        cout << "Name : " << *name << endl;
        cout << "Age  : " << age << endl;
    }

    // Destructor (MANDATORY)
    ~Student() {
        delete name;        // Free dynamic memory
        name = nullptr;     // Avoid dangling pointer
    }
};

int main() {

    // Array of objects (STACK)
    Student students[3];

    students[0].setDetails("Viraj", 21);
    students[1].setDetails("Keval", 22);
    students[2].setDetails("Smit", 23);

    students[0].getDetails();
    students[1].getDetails();
    students[2].getDetails();

    return 0;
}
