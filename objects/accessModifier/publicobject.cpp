#include<iostream>
using namespace std;

class car{
    public : //Access modifier/Specifier
    string brand;
    string color;
    double price;
    string model;
    string type;
    void display(){
        cout<<brand<<endl;
    }
};
int main(){
    car c1; // c1 is the object
    c1.brand = "alto";
    c1.color = "black";
    c1.price = 999;
    c1.model = "x7";
    c1.type = "petrol";

    cout << c1.brand << endl;
    cout << c1.color << endl;
    cout << c1.price << endl;
    cout << c1.model << endl;
    cout << c1.type << endl;
    c1.display();
}