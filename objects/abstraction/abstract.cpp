#include<iostream>
using namespace std;
// Abstraction = Hiding internal details and showing only necessary features.
class Draw{
    virtual void draw() = 0;
};

class Circle : public Draw{
    public:
        void draw(){
            cout<<"Drawing a circle";
        }
};

int main(){
    Circle c1;
    c1.draw();
}