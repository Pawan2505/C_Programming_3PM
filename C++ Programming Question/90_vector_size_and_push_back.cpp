#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Vector created with initial size 5
    vector<int> myvector(5);   // All elements = 0

    // Adding elements using push_back
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);
    myvector.push_back(50);
    myvector.push_back(60);

    cout << "Size of vector : " << myvector.size() << endl;

    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
