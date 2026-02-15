#include <iostream>
using namespace std;
int main()
{
    char arr[] = {'a', 'b', 'c', 'd'};
    cout << "Size of 0th index: " << sizeof(arr[0]) << endl;
    cout << "Size of arr: " << sizeof(arr) << endl;
    cout << "length of arr: " << sizeof(arr) / sizeof(arr[2]) << endl;
    cout << arr[3];
    return 0;
}