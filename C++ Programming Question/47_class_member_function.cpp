#include<iostream>
using namespace std;

// Create class
class Student {
public: // accessible from anywhere
    void display() {
        cout << "Hello Student!" << endl;
    }

    int details() {
        cout << "Noice very high!" << endl;
        return 0;
    }
};

int main() {
    Student ashish;  // Create object

    ashish.display();   // Call first function
    ashish.details();   // Call second function
}
