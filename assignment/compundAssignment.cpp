#include<iostream>
using namespace std;

int main(){
    int x = 10;
    //+= operator
    x+=10;
    cout<<x<<endl;
    //-= operator
    x-=10;
    cout<<x<<endl;
    //*= operator
    x*=10;
    cout<<x<<endl;
    // /= operator
    x/=10;
    cout<<x<<endl;
    //%= operator
    x%=2;
    cout<<x<<endl;

    cout<< ++x + x++;
}