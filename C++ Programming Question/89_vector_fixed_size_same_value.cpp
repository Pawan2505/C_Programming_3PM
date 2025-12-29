#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Vector of size 5, all elements initialized to 2
    vector<int> myvector(5, 2);

    cout << "Size of vector : " << myvector.size() << endl;

    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
