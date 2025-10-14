#include <iostream>
using namespace std;

int main() {

    int arr[] = {23, 43, 45, 67, 898, 67};
    int searchData = 67;
    int updateData = 77;

    int length = sizeof(arr) / sizeof(arr[0]);

    // Update first occurrence of searchData
    for (int i = 0; i < length; i++) {
        if (arr[i] == searchData) {
            arr[i] = updateData;
            break; // update only first occurrence
        }
    }

    // Print updated array
    cout << "Updated Array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
