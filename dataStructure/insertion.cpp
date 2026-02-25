#include<iostream>
#include <vector>
using namespace std;

int main(){
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    int pos,value;

    cout<<"Enter the position you want to insert: ";
    cin>>pos;

    cout<<"Enter the value you want to insert: ";
    cin>>value;

    for(int i=n-1 ; i>=pos ; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = value;
    n = n+1;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}