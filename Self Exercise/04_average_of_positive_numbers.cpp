#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;
    int count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        float avg = sum / count;
        cout << "Average of positive numbers: " << avg << endl;
    } else {
        cout << "No positive numbers found in the array." << endl;
    }

    return 0;
}
