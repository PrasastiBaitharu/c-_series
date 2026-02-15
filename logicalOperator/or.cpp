#include <iostream>
using namespace std;

int main() {
    int math, science;

    cout << "Enter marks in Math: ";
    cin >> math;

    cout << "Enter marks in Science: ";
    cin >> science;

    // Using OR operator
    if (math >= 40 || science >= 40) {
        cout << "Student Passed (at least one subject cleared)." << endl;
    } else {
        cout << "Student Failed (both subjects below 40)." << endl;
    }

    return 0;
}