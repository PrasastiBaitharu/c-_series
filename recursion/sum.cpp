#include<iostream>
using namespace std;

int s;
void sum (int num) {
    if(num>0){
        s += num;
        sum(num-1);
    }
}

int main(){
    int num;
    cout<<"Enter a number to sum from 1 to that number : ";
    cin>>num;
    sum(num);
    cout<<"Sum of numbers : " << s;
    return 0;
}