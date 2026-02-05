#include<iostream>
using namespace std;

void increment(){
    //int x=0; // at every call the value of x get initialized again and again
    static int x=0; // by this in every call the value of x doesn't initialize again and keeps on increasing
    cout<<x<<endl;
    x++;
}

int main(){
    increment();
    increment();
    increment();
}