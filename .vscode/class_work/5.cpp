#include <iostream>
using namespace std;

int main() {
    int num;

    // User se input lena
    cout << "Enter a number: ";
    cin >> num;

    // If-else ladder ka use
    if (num > 0) {
        cout << "The number is Positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is Negative." << endl;
    }
    else {
        cout << "The number is Zero." << endl;
    }

    return 0;
}