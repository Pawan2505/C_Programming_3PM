// Purpose: Demonstrate the use of do-while loop in C++

#include <iostream>
using namespace std;

int main() {

    int num = 11;

    do {
        cout << num << endl;
        num++;
    } while (num <= 10);

    return 0;
}