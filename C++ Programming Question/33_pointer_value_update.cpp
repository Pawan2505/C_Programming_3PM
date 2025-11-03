#include<iostream>
using namespace std;

int main(){
    int a = 20;

    int *ptr = &a;  // ptr stores the address of a

    *ptr = 50;      // changing value of a through pointer

    cout << "Value of a : " << a << endl;
    cout << "Value of *ptr : " << *ptr << endl;

    return 0;
}
