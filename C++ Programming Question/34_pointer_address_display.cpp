#include<iostream>
using namespace std;

int main(){
    int a = 20;

    int *ptr = &a;  // ptr holds address of a

    *ptr = 50;      // modify a using pointer

    cout << "Value of a : " << a << endl;
    cout << "Value of *ptr : " << *ptr << endl;

    cout << "\nAddress of a and ptr:" << endl;
    cout << "Address of a : " << &a << endl;
    cout << "Value stored in ptr : " << ptr << endl;

    return 0;
}
