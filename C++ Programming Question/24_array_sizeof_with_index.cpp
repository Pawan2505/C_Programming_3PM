#include <iostream>
using namespace std;

int main() {

    int arr[] = {23, 43, 45, 67, 898};

    cout << "Size of array in bytes: " << sizeof(arr) << endl;
    cout << "Number of elements in array: " << sizeof(arr)/sizeof(arr[3]) << endl;

    return 0;
}
