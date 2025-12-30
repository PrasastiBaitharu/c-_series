#include<iostream>

using namespace std;

// function using call by value

void changeValue(int x){
    x=50;
    cout<<"Inside function (Call by value), X= " << x <<endl;
}

int main(){
    int a = 10;
    cout<<"Before function call, a=" << a << endl;
    changeValue(a);
    cout<< "After function call, a= " << a << endl; //unchanged
    return 0;
}