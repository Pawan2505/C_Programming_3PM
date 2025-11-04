#include<iostream>
using namespace std;

void display(int &x){
    cout << "The value of x : " << x << endl;
    ++x;
    cout << "The value of x after increment : " << x << endl;
}

int main(){
    int a = 10;
    cout << "The value of a (before function call): " << a << endl;

    display(a);

    cout << "The value of a (after function call): " << a << endl;

    return 0;
}
