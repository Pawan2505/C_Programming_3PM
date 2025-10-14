#include <iostream>
using namespace std;

int main() {

    int arr[] = {23, 43, 45, 67, 898, 67};
    int searchData = 67;

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        if (arr[i] == searchData) {
            cout << "Element " << searchData << " found at index: " << i << endl;
            break;  // stop after first occurrence
        }
    }

    return 0;
}
