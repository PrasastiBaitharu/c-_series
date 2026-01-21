#include <iostream>
using namespace std;

class X {
private:
    int value = 10;

    // Friend function declaration
    friend void showValue(X obj);
};

// Friend function definition
void showValue(X obj) {
    cout << obj.value;
}

int main() {
    X x1;
    showValue(x1);
    return 0;
}
