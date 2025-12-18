#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    cout<<(age>=18?"Eligible for Voting":"Not eligible for voting");
}