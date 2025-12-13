/*
1. if(condition){
    //statement
}
2. else{
    //statement
}    
*/

//Q. Chech the eligibility for voting
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>=18){
        cout<<"Eligibke for vote";
    }else{
        cout<<"Not eligible for vote";
    }
}