#include<iostream>
using namespace std;

class Book{
    public:
    string name;
    string author;
    int edition;

    //Parameterized Constructor
    Book(string name, string author, int edition){//Constructor
        this->name = name;
        this->author = author;
        this->edition = edition;
    }


    //copy constructor
    Book(Book &obj){//pass by reference
        cout<<"I am a custom copy constructor"<<endl;
        this->name = obj.name;
        this->author = obj.author;
        this->edition = obj.edition;
    }
};

int main(){
    //Parameterized Constructor
    Book b("Java" , "Som" , 2);
    // cout<<b.name<<endl;
    // cout<<b.author<<endl;
    // cout<<b.edition<<endl;

    //copy Contructor
    Book b1(b);//custom copy constructor invoked
    cout<<b1.name<<endl;
    cout<<b1.author<<endl;
    cout<<b1.edition<<endl;

    // Book b1(b);//default copy constructor invoked and no need to create a custom constructor inside the class
    // cout<<b1.name<<endl;
    // cout<<b1.author<<endl;
    // cout<<b1.edition<<endl;
}