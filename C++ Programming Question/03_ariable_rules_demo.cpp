// Purpose: Explain rules for naming variables in C++

#include <iostream>
using namespace std;

int main() {

    // Rule 1: Variable name can contain numbers after the name
    int num123 = 10;
    cout << "num123 = " << num123 << endl;

    // Rule 2: Variable name cannot start with a number
    // int 25num = 20; // Not allowed

    // Rule 3: Variable name cannot have spaces
    // int first name = 30; // Not allowed

    // Rule 4: Only '_' and '$' are allowed as special characters
    int first_name = 40; 
    int _num = 50;       
    int $num = 60;       

    cout << "first_name = " << first_name << endl;
    cout << "_num = " << _num << endl;
    cout << "$num = " << $num << endl;

    // Rule 5: Keywords cannot be used as variable names
    // int else = 70; // Not allowed

    // Rule 6: Variable names are case-sensitive
    int num = 80;
    int Num = 90;
    cout << "num = " << num << ", Num = " << Num << endl;

    return 0;
}