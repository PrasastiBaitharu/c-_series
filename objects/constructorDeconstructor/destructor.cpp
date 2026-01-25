#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Default Constructor"<<endl;
    }
    ~A(){
        cout<<"Default Constructor"<<endl;
    }
    
};

int main(){
    A a;
    cout<<"Main function completed"<<endl;
}