#include <iostream>
using namespace std;
//Bubble sort
int main(){
    int n=9;
    int arr[n] = {9,8,7,4,5,6,3,2,1};
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}