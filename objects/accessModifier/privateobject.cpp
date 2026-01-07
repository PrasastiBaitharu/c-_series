#include<iostream>
using namespace std;

class car{
    private :
    string name;
    string model;

    public:
    //setter function
    void setData(string n , string m){
        name = n ;
        model = m;
    }
    //getter function
    void displayData(){
        cout<<name<<endl;
        cout<<model<<endl;
    }
};

int main(){
    car c1;

    c1.setData("bmw" , "x7");
    c1.displayData();
}