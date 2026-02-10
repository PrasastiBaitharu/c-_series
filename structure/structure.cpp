// #include <iostream>
// using namespace std;

// int main()
// {
//     struct
//     {
//         long long int regdno;
//         string name;
//         double mark;
//         string address;
//     } student;

//     student.regdno = 250314100137;
//     student.name = "Harry";
//     student.mark = 19.5;
//     student.address = "Bhubaneswar";
//     cout << student.regdno;
//     cout << student.name;
//     cout << student.mark;
//     cout << student.address;


//     struct
//     {
//         long long int regdno;
//         string name;
//         double mark;
//         string address;
//     } student1,student2;

//     student1.regdno = 250314100137;
//     student1.name = "Harry";
//     student1.mark = 19.5;
//     student1.address = "Bhubaneswar";
//     cout << student1.regdno<<endl;
//     cout << student1.name<<endl;
//     cout << student1.mark<<endl;
//     cout << student1.address<<endl;

//     student2.regdno = 250314100146;
//     student2.name = "Aditya";
//     student2.mark = 14.5;
//     student2.address = "Bhubaneswar";
//     cout << student2.regdno<<endl;
//     cout << student2.name<<endl;
//     cout << student2.mark<<endl;
//     cout << student2.address<<endl;
// }

#include <iostream>
using namespace std;

// Define a structure
struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    // Declare a structure variable
    Student s1;

    // Assign values
    s1.rollNo = 101;
    s1.name = "Prasasti";
    s1.marks = 92.5;

    // Display values
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
