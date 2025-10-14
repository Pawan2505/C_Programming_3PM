#include <iostream>

int main() {

    int arr[6];

    // Input array elements
    for(int i = 0; i <= 5; i++){
        std::cout << "Enter element at index " << i << " : ";
        std::cin >> arr[i];
    }

    // Print original array
    std::cout << "\nOriginal Array: ";
    for(int i = 0; i <= 5; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}
