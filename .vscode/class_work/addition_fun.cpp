#include <iostream>
using namespace std;

/* 1. No Argument, No Return Value */
void add1() {
    int a, b;
    cout << "\n[1] No Argument, No Return Value";
    cout << "\nEnter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
}

/* 2. Argument, No Return Value */
void add2(int a, int b) {
    cout << "\n[2] Argument, No Return Value";
    cout << "\nSum = " << a + b << endl;
}

/* 3. No Argument, Return Value */
int add3() {
    int a, b;
    cout << "\n[3] No Argument, Return Value";
    cout << "\nEnter two numbers: ";
    cin >> a >> b;
    return a + b;
}

/* 4. Argument, Return Value */
int add4(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    // Category 1
    add1();

    // Category 2
    cout << "\nEnter two numbers: ";
    cin >> x >> y;
    add2(x, y);

    // Category 3
    int sum3 = add3();
    cout << "Sum = " << sum3 << endl;

    // Category 4
    cout << "\n[4] Argument, Return Value";
    cout << "\nEnter two numbers: ";
    cin >> x >> y;
    cout << "Sum = " << add4(x, y) << endl;

    return 0;
}