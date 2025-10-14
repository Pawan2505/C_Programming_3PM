// Purpose: Calculate sum of all middle digits (excluding first and last)

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number : ";
    cin >> num;

    num = num / 10;  // Remove last digit first

    int sum = 0;

    while (num >= 10) {
        int digit = num % 10; // Get last digit
        sum += digit;         // Add to sum
        num = num / 10;       // Remove last digit
    }

    cout << "Sum of middle digits is : " << sum << endl;

    return 0;
}