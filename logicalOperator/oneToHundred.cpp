#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n>=1&&n<=100){
        cout<<n<<" will comes between 1 to 100";
    }else{
        cout<<n<<" will not comes under 1 to 100";
    }
}