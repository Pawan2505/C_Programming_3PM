
#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Enter a number (1 for int, 2 for string, 3 for unknown): ";
        int choice;
        cin >> choice;

        if (choice == 1)
            throw 100;                  // integer exception
        else if (choice == 2)
            throw "Some string error";  // string exception
        else
            throw 3.14;                 // double exception (not handled directly)
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (const char* e) {
        cout << "Caught string exception: " << e << endl;
    }
    catch (...) {
        cout << "Caught a general exception (using ...)" << endl;
    }

    cout << "Program continues normally..." << endl;
    return 0;
}