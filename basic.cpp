#include<iostream>
using namespace std;
int main(){
    char arr[4] = {'A','B','C','D'};
    cout<<arr[0]<<" "<<arr[1]<<" ";
    arr[2]='F'; // update the arr index of 2
    cout<<arr[2];
    return 0;
}