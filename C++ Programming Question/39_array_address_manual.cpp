#include<iostream>
using namespace std;

int main(){

    int arr[5] = {12, 34, 56, 7, 8};

    cout << "&arr        : " << &arr << endl;
    cout << "&arr[0]     : " << &arr[0] << endl;
    cout << "&arr[1]     : " << &arr[1] << endl;
    cout << "&arr[2]     : " << &arr[2] << endl;
    cout << "&arr[3]     : " << &arr[3] << endl;
    cout << "&arr[4]     : " << &arr[4] << endl;

    return 0;
}
