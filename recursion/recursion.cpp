#include<iostream>
using namespace std;

void printNum(int num){
    if(num<=5){
        cout<<num<<endl;
        return printNum(num+1);
    }
    return;
}
 
int main(){
    printNum(1);
    return 0;
}