#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> myvector = {12, 34, 56, 78};

    cout << "Size of vector : " << myvector.size() << endl;

    // Range-based for loop
    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
