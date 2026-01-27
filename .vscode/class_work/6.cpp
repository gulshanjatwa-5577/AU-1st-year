#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;

    char O;
    cout << "Enter  +,- ,* ,/  operator :";
    cin >> O;
    switch (O)
    {
    case '+':
        cout << "Addition is :" << a + b << endl;
        break;
    case '-':
        cout << "Substraction is :" << a - b << endl;
        break;
    case '*':
        cout << "Multiplication is :" << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Division is :" << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
        break;
    default:
        cout << "Invalid operator?" << endl;
    }
    return 0;
}