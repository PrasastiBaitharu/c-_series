#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(int i=0 ; i<9 ; i++){
        int count=0;
        for(int j=1 ; j<=arr[i] ; j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}