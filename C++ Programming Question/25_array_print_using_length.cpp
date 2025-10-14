#include <iostream>
using namespace std;

int main() {

    int arr[] = {23, 43, 45, 67, 898};

    int length = sizeof(arr)/sizeof(arr[3]);

    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
