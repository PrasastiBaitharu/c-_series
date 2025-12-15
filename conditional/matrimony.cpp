//Q. Matrimony
//if,else if,else and && operator

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age<18){
        cout<<"What a naughty child";
    }else if(age>=18 && age<=33){
        cout<<"Welcome man you are eligible";
    }else if(age>=34 && age<=39){
        cout<<"Sit Focus on family";
    }else if(age>=40 && age<=55){
        cout<<"Buy a New car and enjoy";
    }else{
        cout<<"Do some bhajan";
    }
}