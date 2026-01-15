#include <iostream>
using namespace std;

class Animal{
    public:
    void display(){
        cout<<"Animal sound";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"bow bow";
    }    
};

int main(){
    Dog d ;
    d.bark();
    d.display();
}