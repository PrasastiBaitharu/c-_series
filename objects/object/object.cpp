#include<iostream>
using namespace std;

class Pen{
    public:
    string brand;
    int price;
};

int main(){
    Pen p; //Created the object with the reference of p
    p.brand = "Elkos";
    p.price = 5;

    cout<<p.brand<<endl<<p.price<<endl;
}