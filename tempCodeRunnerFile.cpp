#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    int roll;

    void fhe()
    {
        cout << "you addmision in school: " << name;
    }
};
int main()
{
    student s1;
    s1.name = "gulshan";
    return 0;
}