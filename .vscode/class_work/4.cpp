#include <iostream>
using namespace std;

int main() {
    system("cls");
    double pi = 3.14159;
    int intValue;

    // Explicit typecasting using C-style cast
    intValue = (int)pi;

    cout << "Original double value: " << pi << endl;
    cout << "After explicit typecasting to int: " << intValue << endl;

    /* Explicit typecasting using C++ style cast */
    char ch = static_cast<char>(65);  // ASCII value of 'A'

    cout << "Explicit typecasting int 65 to char: " << ch << endl;

    return 0;
}