#include <iostream>
using namespace std;

// Class creation
class Student {
private:
    // Data members (hidden)
    string name;
    int age;

public:
    // Setter method (set values)
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Getter method (get/display values)
    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main() {

    Student s1, s2;

    // Direct access NOT allowed
    // s1.name = "Pawan";   ❌
    // cout << s1.name;     ❌

    s1.setDetails("Ansu", 15);
    s1.getDetails();

    s2.setDetails("Nichiket", 20);
    s2.getDetails();

    return 0;
}
