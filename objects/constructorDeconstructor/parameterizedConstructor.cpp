#include<iostream>
using namespace std;

class Book{
    public:
    string name;
    string author;
    int edition;

    //Parameterized Constructor
    Book(string n, string a, int e){//Constructor
        name = n;
        author = a;
        edition = e;
    }

    
};

int main(){
    //Parameterized Constructor
    Book b("Java" , "Som" , 2);
    cout<<b.name<<endl;
    cout<<b.author<<endl;
    cout<<b.edition<<endl;

   
}