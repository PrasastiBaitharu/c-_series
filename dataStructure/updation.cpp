#include <iostream>
using namespace std;

int main(){
    int sz = 10;
    int arr[sz] = {1,2,3,4,5,6,7,8,9,10};
    int pos, value;

    cout<<"Enter the position to update the value: ";
    cin>>pos;

    cout<<"Enter the value to update in the position: ";
    cin>>value;

    arr[pos] = value;

    for(int i=0 ; i<sz ; i++){
        cout<<arr[i]<<endl;
    }
}