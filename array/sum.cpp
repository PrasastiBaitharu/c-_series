#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int s;
    for(int i=0 ; i<6 ; i++){
        s = s + arr[i];
    }
    cout<<"Sum of array is : " << s ;
}