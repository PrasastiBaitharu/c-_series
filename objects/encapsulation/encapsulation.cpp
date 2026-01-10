#include <iostream>
using namespace std;
//Encapsulation = wrapping data + methods & hiding data using private.
class Student {
private:
    int marks;   // hidden data

public:
    void setMarks(int m) {    // public function to set value
        marks = m;
    }

    int getMarks() {          // public function to access value
        return marks;
    }
};

int main() {
    Student s;
    s.setMarks(85);          // setting value through function

    cout << "Marks: " << s.getMarks();
    return 0;
}
