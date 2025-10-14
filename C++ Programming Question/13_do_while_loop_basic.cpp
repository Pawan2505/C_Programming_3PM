// Purpose: Demonstrate basic do-while loop to print numbers 1 to 10

#include <iostream>
using namespace std;

int main() {

    int num = 1;

    do {
        cout << num << endl;
        num++;
    } while (num <= 10);

    return 0;
}