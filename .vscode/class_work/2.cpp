#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    Day today = Wednesday;   // Assign enum value

    cout << "Day of the week: ";

    switch (today) {
        case Sunday:    cout << "Sunday"; break;
        case Monday:    cout << "Monday"; break;
        case Tuesday:   cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday:  cout << "Thursday"; break;
        case Friday:    cout << "Friday"; break;
        case Saturday:  cout << "Saturday"; break;
    }

    return 0;
}