//virtual function n c++

#include<iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout<<"Base Class";
        }
};

class Derived:public Base{
    public:
        void show(){
            cout<<"Derived Class";
        }
};

int main(){
    Base *ptr;//this will point all the member function of the base class
    Derived d; // creating a object of d
    ptr = &d; //By this now the pointer is also pointing to the all member function to the derived class means both base and derived
    ptr->show(); // Now this will give the output of base class show function rather than the derived class show function as the pointer is come from the base class
                    // it directly point to the base class show function automatically and deny to function overriding

    //pointer can only be used in the base class not in the derived class to use the same pointer in the derived class
    //if we declare the pointer in the derived class we cannot point it to the base class because base class is the parent of the derived child class 

}


//to avoid this and perform the function overriding we will use virtual function in the base class 
#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout<<"Base Class";
        }
};

class Derived:public Base{
    public:
        void show(){
            cout<<"Derived Class";
        }
};

int main(){
    Base *ptr;
    Derived d; 
    ptr = &d; 
    ptr->show(); 
}