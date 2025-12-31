#include<iostream>

using namespace std;

// function using call by reference

void changeValue(int &x){
    x=50;
    cout<<"Inside function (Call by reference), X= " << x <<endl;
}

int main(){
    int a = 10;
    cout<<"Before function call, a=" << a << endl;
    changeValue(a);
    cout<< "After function call, a= " << a << endl; //changed
    return 0;
}