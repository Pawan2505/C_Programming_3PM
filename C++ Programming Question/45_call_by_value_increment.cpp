#include <iostream>
using namespace std;

void display(int x)
{
    cout << "The value of x (received copy): " << x << endl;
    ++x;  // incrementing local copy
    cout << "The value of x (after increment): " << x << endl;
}

int main()
{
    int a = 10;
    cout << "The value of a (before function call): " << a << endl;

    display(a);  // call by value — passes copy of 'a'

    cout << "The value of a (after function call): " << a << endl;

    return 0;
}
