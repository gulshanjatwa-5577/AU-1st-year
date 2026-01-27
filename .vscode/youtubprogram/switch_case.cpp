#include<iostream>
using namespace std;
int main(){
    system("cls");
    int day;
    cout<<"Enter a Day number :";
    cin>>day;
    switch(day){
            case 1:
            cout<<"Today is monday"<<endl;
            break;
            case 2:
            cout<<"Today is tuesday"<<endl;
            break;
            case 3:
            cout<<"Today is wednsday"<<endl;
            break;
            case 4:
            cout<<"Today is thurday"<<endl;
            break;
            case 5:
            cout<<"Today is friday"<<endl;
            break;
            case 6:
            cout<<"Today is suterday"<<endl;
            break;
            case 7:
            cout<<"Today is sunday"<<endl;
            break;
            default:
            cout<<"invalid day?";
    }
     return 0;
}