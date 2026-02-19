#include <iostream>
using namespace std;

class Bank{
private:
    int bankBalance;

public:
    Bank(int bankBalance){
        this->bankBalance = bankBalance;
    }

    void deposit(int amt){
        bankBalance += amt;
        cout <<amt<< " is Deposited to your Account" << endl;
    }

    void withdraw(int amt){
        if (amt > bankBalance){
            cout << "Insufficient Balance in your Account";
        }
        else{
            bankBalance -= amt;
            cout <<amt<< " is Withdrawn from your Account" << endl;
        }
    }

    void balance(){
        cout<<"Total Balance: "<<bankBalance<<endl;
    }
};

int main(){
    Bank harry(50000);
    harry.balance();
    harry.deposit(10000);
    harry.balance();
    harry.withdraw(5000);
    harry.balance();
}