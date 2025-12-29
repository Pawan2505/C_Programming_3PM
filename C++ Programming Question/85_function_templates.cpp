#include <iostream>
using namespace std;

// Template function for addition
template <typename T1, typename T2>
T1 add(T1 x, T2 y) {
    return x + y;
}

// Template function for subtraction
template <typename T1, typename T2>
T1 sub(T1 x, T2 y) {
    return x - y;
}

int main() {

    cout << "The sum is : " << add(20.5, 10) << endl;
    cout << "The sub is : " << sub(25.5, 10) << endl;

    return 0;
}
