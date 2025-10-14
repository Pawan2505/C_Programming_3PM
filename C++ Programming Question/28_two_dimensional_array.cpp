#include <iostream>
using namespace std;

int main() {

    int rowSize, colSize;

    cout << "Enter row size: ";
    cin >> rowSize;

    cout << "Enter column size: ";
    cin >> colSize;

    int arr[rowSize][colSize];

    // Input 2D array
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < colSize; col++) {
            cout << "Enter element at row " << row << ", col " << col << ": ";
            cin >> arr[row][col];
        }
    }

    // Print 2D array
    cout << "2D Array is: " << endl;
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < colSize; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
