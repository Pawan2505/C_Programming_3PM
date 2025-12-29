#include <iostream>
using namespace std;

class Student {
public:
    // Method 1: two int parameters
    int data(int x, int y) {
        cout << "Method 1 (int, int)" << endl;
        return x + y;
    }

    // Method 2: double and int parameters
    double data(double x, int y) {
        cout << "Method 2 (double, int)" << endl;
        return x + y;
    }

    // Method 3: three int parameters
    int data(int x, int y, int z) {
        cout << "Method 3 (int, int, int)" << endl;
        return x + y + z;
    }
};

int main() {

    Student s1;

    cout << "s1.data(10, 20)     : " << s1.data(10, 20) << endl;
    cout << "s1.data(10.5, 20)   : " << s1.data(10.5, 20) << endl;
    cout << "s1.data(10,20,30)   : " << s1.data(10, 20, 30) << endl;

    return 0;
}
