// Purpose: Demonstrate a while loop that counts down from 10 to 1

#include <iostream>
using namespace std;

int main() {

    int num = 10;

    while (num > 0) {
        cout << num << endl;
        num--;
    }

    return 0;
}