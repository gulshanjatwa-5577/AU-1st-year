//Using Declaration: Imports specific members only.


#include<iostream>
using namespace std;
namespace baba{
    void G(){
        cout<<"jay shree mahakal" <<endl;
    }
}
using baba::G;
int main(){ system("cls");
    G();
    return 0;
}