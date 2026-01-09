#include<iostream>
using namespace std;

class Vehicle{
    //It can be accessed in derived class but not in main funnctio
    protected :
    string name;
    string model;

    
};
class Car:protected Vehicle{
    public:
    void setData(string n , string m){
        name = n ;
        model = m;
    }
    void displayData(){
        cout<<name<<endl;
        cout<<model<<endl;
    }
};

int main(){
    Car c1;

    c1.setData("bmw" , "x7");
    c1.displayData();
}