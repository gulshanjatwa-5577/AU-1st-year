//. Global Namespace: Accessed using :: (scope resolution operator).

#include <iostream>
using namespace std;

int a = 34;

int main()
{
    int a = 24;
    cout << ::a << endl;
    cout << a;

    return 0;
}
