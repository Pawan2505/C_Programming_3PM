#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Vector created with size 6 (all values initialized to 0)
    vector<int> myvector(6);

    // Assigning values using index
    myvector[0] = 10;
    myvector[1] = 20;
    myvector[2] = 30;
    myvector[3] = 40;
    myvector[4] = 50;
    // myvector[5] is still 0

    cout << "Size of vector : " << myvector.size() << endl;

    for (int element : myvector) {
        cout << element << " ";
    }

    return 0;
}
