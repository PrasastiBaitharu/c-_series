#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector <int> vec;//syntax
    // vector <int> vec(5,0);
    vector <int> vec = {1,2,3,4};
    vec.push_back(5);
    cout<<"size of the vector is: "<< vec.size()<<endl;
    vec.pop_back();
    cout<<vec.front()<<endl<<vec.back()<<endl;
    cout<<"Data inside the vector"<<endl;
    for(int val: vec){
        cout<<val<<endl;
    }
    cout<<vec.at(2)<<endl;
}