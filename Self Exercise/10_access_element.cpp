#include <iostream>
using namespace std;

int main() {
    int n, index;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to access: ";
    cin >> index;

    if (index >= 0 && index < n) {
        cout << "Element at index " << index << " is " << arr[index] << endl;
    } else {
        cout << "Invalid index. Please enter index between 0 and " << n - 1 << endl;
    }

    return 0;
}
