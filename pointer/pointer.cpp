#include<iostream>
using namespace std;

int main(){
    int a = 20;
    cout<<&a<<endl;
    int * ptr = &a;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    //changing the value of a using pointer
    *ptr = 30;
    cout<<a<<endl;

    return 0;
}