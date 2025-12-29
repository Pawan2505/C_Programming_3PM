#include <iostream>
using namespace std;

// Global variable
string name = "Disant";

int main() {

    // Local variable
    string name = "Romil";

    cout << name << endl;      // Local variable → Romil
    cout << ::name << endl;    // Global variable → Disant

    return 0;
}
