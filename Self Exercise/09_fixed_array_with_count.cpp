#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count = 0;
    int choice, value;

    do {
        cout << "\n--- MENU ---";
        cout << "\n1. Insert element";
        cout << "\n2. Display elements";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                if (count < 100) {
                    cout << "Enter value to insert: ";
                    cin >> value;
                    arr[count] = value;
                    count++;
                    cout << "Element inserted successfully\n";
                } else {
                    cout << "Array is full. Cannot insert more elements.\n";
                }
                break;

            case 2:
                if (count == 0) {
                    cout << "Array is empty\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < count; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 3);

    return 0;
}
