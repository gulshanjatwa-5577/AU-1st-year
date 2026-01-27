#include <iostream>
using namespace std;

int main() {
    system ("cls");
    
    int x = 10;          // Original variable
    int &ref = x;        // Reference variable

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    // Changing value using reference
    ref = 20;

    cout << "After modifying ref:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}