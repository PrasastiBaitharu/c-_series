#include<iostream>
using namespace std;

class Book{
    private:
        string bookName;
        int issues;

    public:
        Book(string bookName){
            this->bookName = bookName;
            issues=0;
        }

        void bookIssue(){
            if(issues==0){
                issues=1;
                cout<<"Book Issued"<<endl;
            }else{
                cout<<"Book is not available"<<endl;
            }
        }

        void bookReturn(){
            if(issues==1){
                issues=0;
                cout<<"Book Returned"<<endl;
            }else{
                cout<<"Book is available"<<endl;
            }
        }
};

int main(){
    Book b1("Javascript");
    
    b1.bookReturn();
    b1.bookIssue();    
}