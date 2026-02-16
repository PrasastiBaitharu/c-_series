#include <iostream>
using namespace std;

int main() {
    bool isRaining = false;

    // The ! operator flips 'false' to 'true'
    if (!isRaining) {
        cout << "It's not raining! You can go outside." << endl;
    }

    return 0;
}