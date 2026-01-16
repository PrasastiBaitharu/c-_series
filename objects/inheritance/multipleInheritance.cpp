#include<iostream>
using namespace std;

class A{
    public:
    void displayA(){
        cout<<"Hello A"<<endl;
    }
};

class B{
    public:
    void displayB(){
        cout<<"Hello B"<<endl;
    }
};

class C:public A,public B{
    public:
    void displayC(){
        cout <<"Hello C"<<endl;
    }
};

int main (){
    C c;
    c.displayA();
    c.displayB();
    c.displayC();
}