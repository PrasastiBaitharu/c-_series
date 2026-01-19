#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B :virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C: virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// D inherits from B (which already inherited A) and from C → Hybrid
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;

    obj.showA(); // from A through B
    obj.showB(); // from B
    obj.showC(); // from C
    obj.showD(); // own function

    return 0;
}
