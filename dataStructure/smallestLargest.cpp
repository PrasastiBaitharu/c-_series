#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,10,22,-15,45};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0 ; i<5 ; i++){
        // if(arr[i]<smallest){
        //     smallest = arr[i];
        // }
        //OR
        smallest = min(arr[i], smallest);
        largest = max(arr[i],largest);
    }

    cout<<"Smallest is : " << smallest <<endl;
    cout<<"Largest is : "<<largest<<endl;
}