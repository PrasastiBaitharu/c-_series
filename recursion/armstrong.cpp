#include<iostream>
using namespace std;

int s , c ;

void count(int n){
    if(n<1){
        return;
    }
    c++;
    return count(n/10);
}

int armstrong(int n){
    if(n==0){
        return 0;
    }
    int a = n%10;
    int f=1;
    for(int i=1 ; i<=c ; i++){
        f = f * a;
    }
    s = s +f;
    return armstrong(n/10);
}

int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    count(n);
    armstrong(n);
    if(n==s){
        cout<<"It is a armstrong number"<<endl;
    }else{
        cout<<"It is not a armstrong number"<<endl;
    }

}