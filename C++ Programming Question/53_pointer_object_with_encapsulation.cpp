#include <iostream>
using namespace std;

// Class creation
class Student {
private:
    // Data members (encapsulated)
    string name;
    int age;

public:
    // Setter method
    // ❗ return type should be void (no return value)
    void setDetails(string name1, int age1) {
        name = name1;
        age = age1;
    }

    // Getter method
    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main() {

    // Creating object dynamically (heap)
    Student* s1 = new Student();

    // ❌ Not OK (because s1 is a pointer)
    // s1.setDetails("Maharishi", 18);

    // ✅ Correct way using arrow operator
    s1->setDetails("Maharishi", 18);
    s1->getDetails();

    // Free memory
    delete s1;
    s1 = nullptr;

    return 0;
}
