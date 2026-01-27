#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    system("cls");
    float a = 2.0;
    char b = a + 65.0; // implicit type
    cout << b << endl;

    char G = 'Z';
    int y = static_cast<int>(G); // type casting or char to int conversion c++ style explicit
    cout << y << endl;           // 0-9 48-57 A-Z 65-90 a-z 97-122

    cout << "point dikhnane ke liye:" << endl;

    float g, f;
    g = 2.5;
    f = g + 23;
    cout << fixed;      // (fixed point notation)
    cout.precision(2);
    cout << f << "\n";

    return 0;
} 