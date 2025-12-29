#include <iostream>
using namespace std;

// Function template
template <typename T1, typename T2>
T1 add(T1 x, T2 y) {
    return x + y;
}

int main() {

    int sum = add(20.5, 10);

    cout << "The sum is : " << sum << endl;

    return 0;
}
