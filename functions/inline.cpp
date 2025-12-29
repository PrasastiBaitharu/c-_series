#include<iostream>

using namespace std;

inline int add (int a , int b){
    return a+b;
}

int main(){
    int x,y;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;
    cout<<"Sum is: "<<add(x,y);
}