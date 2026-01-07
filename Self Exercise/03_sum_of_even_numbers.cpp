#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Even numbers in array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            sum += arr[i];
        }
    }

    cout << "\nSum of even numbers: " << sum << endl;

    return 0;
}
