// Purpose: Find the sum of the first and last digit of a given number

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number : ";
    cin >> num;

    int last = num % 10;   // Extract last digit

    // Find first digit
    while (num >= 10) {
        num = num / 10;
    }

    int first = num;

    int result = first + last;

    cout << "Sum of first and last digit is : " << result << endl;

    return 0;
}