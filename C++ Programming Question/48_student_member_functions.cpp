#include<iostream>
using namespace std;

// Create class
class Student {
public: // Accessible from anywhere
    void display() {
        cout << "Hello Student!" << endl;
    }

    int details() {
        cout << "Noice very high!" << endl;
        return 0; // since return type is int
    }
};

int main() {
    Student ashish;  // Create object

    // Call member functions using object
    ashish.display();   
    ashish.details();   
}
