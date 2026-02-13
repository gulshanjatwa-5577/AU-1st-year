#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    string brand;
    string modal;
    string year;
    int speed;

    void start()
    {
        cout << "car is " << endl
             << brand << endl
             << modal << endl
             << year <<endl
             <<speed;
   
            }       
};

int main()
{
    car gcar1;
    gcar1.brand = "\'bmw\'";
    gcar1.modal = "\'xgt\'";
    gcar1.year = "\'1990\'";
    gcar1.speed = 120;
    gcar1.start();
    return 0;
}