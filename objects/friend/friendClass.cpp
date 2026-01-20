#include <iostream>
using namespace std;

class X {
private:
    int value = 10;   // renamed variable for clarity

    friend class Y;
};

class Y {
public:
    void show(X obj) {   // object required
        cout << obj.value;
    }
};

int main() {
    X obj1;
    Y y1;
    y1.show(obj1);
}
