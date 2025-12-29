#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Vector initialized with values
    vector<int> myvector {12, 34, 56, 78};

    cout << "Size of vector : " << myvector.size() << endl;

    // Range-based for loop (foreach)
    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
