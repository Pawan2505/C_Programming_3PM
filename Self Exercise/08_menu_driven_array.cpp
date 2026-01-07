#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, index, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n----- MENU -----";
        cout << "\n1. Access element at index";
        cout << "\n2. Insert element at index";
        cout << "\n3. Delete element at index";
        cout << "\n4. Update element at index";
        cout << "\n5. Display all elements";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter index: ";
                cin >> index;
                if (index >= 0 && index < n) {
                    cout << "Element at index " << index << " is " << arr[index] << endl;
                } else {
                    cout << "Invalid index\n";
                }
                break;

            case 2:
                cout << "Enter index to insert: ";
                cin >> index;
                cout << "Enter value: ";
                cin >> value;

                if (index >= 0 && index <= n) {
                    for (int i = n; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    n++;
                    cout << "Element inserted successfully\n";
                } else {
                    cout << "Invalid index\n";
                }
                break;

            case 3:
                cout << "Enter index to delete: ";
                cin >> index;

                if (index >= 0 && index < n) {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully\n";
                } else {
                    cout << "Invalid index\n";
                }
                break;

            case 4:
                cout << "Enter index to update: ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> value;

                if (index >= 0 && index < n) {
                    arr[index] = value;
                    cout << "Element updated successfully\n";
                } else {
                    cout << "Invalid index\n";
                }
                break;

            case 5:
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 6);

    return 0;
}
