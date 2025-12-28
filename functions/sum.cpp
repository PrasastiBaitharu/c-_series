#include <iostream>

using namespace std;

int add(int a , int b){
    int res = a+b;
    return res;
}

int main(){
    int res1 = add(2,5);
    cout<<res1;
}