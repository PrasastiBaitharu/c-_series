#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz , int target){
    for(int i=0 ; i<sz ; i++){
        if(arr[i] == target){
            return 1;
        }
    }
    return -1;
}

int main(){
    int sz = 5;
    int arr[sz] = {1,3,5,7,9};
    int target = 5;
    int result = linearSearch(arr,sz,target);
    cout<<result;
}