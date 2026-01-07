#include <iostream>
using namespace std;

int main() {
    int n;
    int posCount = 0, negCount = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        }
    }

    cout << "Total positive numbers: " << posCount << endl;
    cout << "Total negative numbers: " << negCount << endl;

    return 0;
}
