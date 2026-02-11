#include<iostream>
using namespace std;

int main(){
    int age ;
    cout<<"Enter your age : ";
    cin>>age;

    try
    {
        if(age>=18){
            cout<<"Eligible to vote";
        }else{
            throw(age);
        }
    }
    catch(int a)
    {
        cout<<a<<"year is not eligible to vote";
    }
    

}