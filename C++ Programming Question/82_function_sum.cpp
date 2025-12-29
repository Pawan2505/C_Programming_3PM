#include <iostream>
using namespace std;

// Function definition
int disp(int x, int y, int z) {
    return x + y + z;
}

int main() {

    int x = 10, y = 20, z = 50;

    cout << "Sum : " << disp(x, y, z) << endl;

    return 0;
}
