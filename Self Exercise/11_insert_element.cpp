#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, index, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to insert: ";
    cin >> index;

    cout << "Enter value to insert: ";
    cin >> value;

    if (index >= 0 && index <= n && n < 100) {
        for (int i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        n++;

        cout << "Updated array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid index or array is full.";
    }

    return 0;
}
