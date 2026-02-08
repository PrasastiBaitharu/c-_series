#include<iostream>
using namespace std;

int count;



void primeNumber(int n, int i ){
    if(i>n){
        return;
    }
    if(n%i==0){
        count++;
    }
    return primeNumber(n, i=i+1);
}

int main(){
    int n;
    int i=1;
    cout<<"Enter a number : ";
    cin>>n;
    primeNumber(n, i);
    if(count==2){
        cout<<"It is a prime number";
    }else{
        cout<<"It is a composite number";
    }
}