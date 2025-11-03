#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;   // pointer storing address of x

    cout << "Value of x : " << x << endl;
    cout << "Address of x : " << &x << endl;

    cout << "\nPointer Concept :" << endl;
    cout << "ptr (Address stored in pointer): " << ptr << endl;
    cout << "*ptr (Value at that address): " << *ptr << endl;

    return 0;
}
