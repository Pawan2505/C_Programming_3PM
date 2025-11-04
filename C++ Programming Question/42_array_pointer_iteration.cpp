#include<iostream>
using namespace std;

int main(){

    int arr[5] = {12, 34, 56, 7, 8};

    cout << "arr (base address): " << arr << endl;
    cout << "&arr (address of array): " << &arr << endl;

    int *ptr = arr;  // arr itself acts as a pointer to its first element

    cout << "\nAddresses of each element:" << endl;
    for(int i = 0; i < 5; i++){
        cout << i << " index address : " << (ptr + i) << endl;
    }

    cout << "\nValues of each element:" << endl;
    for(int i = 0; i < 5; i++){
        cout << i << " index value : " << *(ptr + i) << endl;
    }

    return 0;
}
