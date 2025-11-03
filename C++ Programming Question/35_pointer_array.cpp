#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr[5];   // array of 5 integer pointers

    // storing address of each array element in pointer array
    for(int i = 0; i < 5; i++){
        ptr[i] = &arr[i];
    }

    cout << "Values using pointer array:" << endl;
    for(int i = 0; i < 5; i++){
        cout << *ptr[i] << endl;
    }

    cout << "\narr addresses:" << endl;
    for(int i = 0; i < 5; i++){
        cout << &arr[i] << endl;
    }

    cout << "\nptr stored addresses:" << endl;
    for(int i = 0; i < 5; i++){
        cout << ptr[i] << endl;
    }

    return 0;
}
