#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    int roll;

    void entry()
    {
        cout << "you addmision in school: " << name;
    }
};
int main()
{
    student s1;
    s1.name = "gulshan";
    s1.entry();
    return 0;
}