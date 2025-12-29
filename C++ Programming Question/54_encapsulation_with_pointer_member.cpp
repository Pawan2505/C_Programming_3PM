#include <iostream>
using namespace std;

// Class creation
class Student {
private:
    // Pointer data member (dynamic memory)
    string* name;
    int age;

public:
    // Constructor
    Student() {
        name = nullptr;
        age = 0;
    }

    // Setter method
    // ❗ return type should be void
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

    // Destructor (VERY IMPORTANT)
    ~Student() {
        delete name;       // Free dynamic memory
        name = nullptr;    // Avoid dangling pointer
    }
};

int main() {

    // Dynamic object creation
    Student* s1 = new Student();

    // Using arrow operator (pointer object)
    s1->setDetails("Maharishi", 18);
    s1->getDetails();

    // Free object memory
    delete s1;
    s1 = nullptr;

    return 0;
}
