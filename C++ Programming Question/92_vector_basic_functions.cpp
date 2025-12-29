#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> myvector;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);

    // empty() returns true or false
    myvector.empty() ? cout << "Is empty\n" : cout << "Not empty\n";

    cout << "Size of vector : " << myvector.size() << endl;

    cout << "My vector is : ";
    for (int element : myvector) {
        cout << element << " ";
    }

    // back() → last element
    cout << "\nDeleted data from vector : " << myvector.back() << endl;
    myvector.pop_back();   // removes last element

    cout << "After deletion : ";
    for (int element : myvector) {
        cout << element << " ";
    }

    // front() → first element
    cout << "\nStarting data in vector : " << myvector.front() << endl;

    // at() → safe access with bounds checking
    cout << "Value at index 2 : " << myvector.at(2) << endl;

    return 0;
}
