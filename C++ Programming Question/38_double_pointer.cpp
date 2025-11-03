#include<iostream>
using namespace std;

int main(){
    int x = 10;            // simple integer variable
    int *ptr1 = &x;        // ptr1 stores the address of x

    cout << "Value of x : " << x << endl;
    cout << "Address of x : " << &x << endl;

    cout << "\nPointer Concept :" << endl;
    cout << "ptr1 (Address of x) : " << ptr1 << endl;
    cout << "*ptr1 (Value at address stored in ptr1) : " << *ptr1 << endl;

    int **ptr2 = &ptr1;    // ptr2 stores the address of ptr1

    cout << "\nDouble Pointer Concept :" << endl;
    cout << "&ptr1 (Address of ptr1) : " << &ptr1 << endl;
    cout << "ptr2 (Address stored in ptr2) : " << ptr2 << endl;
    cout << "*ptr2 (Value stored at address ptr2 — i.e., ptr1) : " << *ptr2 << endl;
    cout << "**ptr2 (Value stored at address *ptr2 — i.e., x) : " << **ptr2 << endl;
    cout << "&ptr2 (Address of ptr2) : " << &ptr2 << endl;

    return 0;
}
