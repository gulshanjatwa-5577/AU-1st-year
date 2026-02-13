
//Namespace with using Directive
#include<iostream>
using namespace std;
    namespace baba{
        void G(){
            cout<<"jay shree mahakal"<<endl;
        }   
     int add(int a, int b){
        return a+b;
     }
    }
    using namespace baba;
    int main(){ 
        system("cls");
        cout<<add(10,20)<<endl;
        G();
        
        return 0;
    }