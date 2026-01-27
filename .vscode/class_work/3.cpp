#include <iostream>
using namespace std;

int main()
{
    system("cls");
    char num = 8; // integer
    int result; // float

    // Implicit typecasting: int promoted to float
    result = num;

    cout << "char value: " << num << endl;
    cout << "Result after implicit typecasting: " << result << endl;

    char ch = 'A';  // character
    int ascii = ch; // implicit conversion char → int

    cout << "Character: " << ch << endl;
    cout << "ASCII value (implicit typecasting): " << ascii << endl;

    return 0;
}