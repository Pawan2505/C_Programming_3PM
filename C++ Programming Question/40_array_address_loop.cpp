#include<iostream>
using namespace std;

int main(){

    int arr[5] = {12, 34, 56, 7, 8};

    cout << "Addresses of array elements:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "&arr[" << i << "] : " << &arr[i] << endl;
    }

    return 0;
}
