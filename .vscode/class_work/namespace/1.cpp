// Basic Namespace Example:

#include<iostream>
using namespace std;
 namespace G1{
    void scr(){
        cout<<"Inside G1 scr"<<endl;
    }
 }
    namespace G2{
        void scr(){
            cout<<"Inside G2 scr"<<endl;
        }
    }
    int main(){
        G1::scr();
        G2::scr();
    }