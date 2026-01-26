#include<iostream>
using namespace std;

class Book{
    public:
    string name;
    string author;
    int edition;

    //Default Constructor
    // Book(){//Constructor
    //     cout<<"Default Constructor Called While Creating Object";
    // }

    //Parameterized Constructor
    Book(string n, string a, int e){//Constructor
        name = n;
        author = a;
        edition = e;
    }

    //copy constructor
    Book(Book &obj){//pass by reference
        name = n;
        author = a;
        edition = e;
    }
};

int main(){
    //Parameterized Constructor
    Book b("Java" , "Som" , 2);
    // cout<<b.name<<endl;
    // cout<<b.author<<endl;
    // cout<<b.edition<<endl;

    //copy Contructor
    Book b1(b);//default copy constructor invoked
    cout<<b1.name<<endl;
    cout<<b1.author<<endl;
    cout<<b1.edition<<endl;
}