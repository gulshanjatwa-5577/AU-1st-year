//Nested Namespace
#include<iostream>
using namespace std;
    namespace outer{
        void hat(){
            cout<<"Inside outer he"<<endl;
        }
        namespace inner{
            void hat(){
                cout<<"Inside inner he"<<endl;
            }
        }
    }
    
    int main(){
        system("cls");
        outer::inner::hat();
        
        return 0;
    }