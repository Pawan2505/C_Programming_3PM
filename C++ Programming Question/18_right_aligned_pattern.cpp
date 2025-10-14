#include<iostream>
using namespace std;

int main() {

    for(int row = 1; row <= 5; row++) {

        // Print spaces
        for(int space = 1; space <= 5 - row; space++) {
            cout << "_";
        }

        // Print numbers
        for(int num = 6 - row; num <= 5; num++) {
            cout << num;
        }

        cout << endl;
    }

    return 0;
}
