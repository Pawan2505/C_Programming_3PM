#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> myvector;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);

    cout << "Original vector : ";
    for (int element : myvector) {
        cout << element << " ";
    }

    // Insert 100 at index 3
    myvector.insert(myvector.begin() + 3, 100);

    // Insert 200 at (end - 3)
    myvector.insert(myvector.end() - 3, 200);

    cout << "\nAfter insert() : ";
    for (int element : myvector) {
        cout << element << " ";
    }

    // Erase element at index 2
    myvector.erase(myvector.begin() + 2);

    cout << "\nAfter erase() : ";
    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
