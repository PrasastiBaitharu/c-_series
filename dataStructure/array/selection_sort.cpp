#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int arr[9] = {7,8,9,6,5,4,1,2,3};

    for(int i=0 ; i<n ; i++){
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}