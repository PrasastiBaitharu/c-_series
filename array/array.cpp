#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    cout << arr[2] << endl;  // Outputs 30
    //cout<<sizeof(arr); // 1 int element is of 4 bit then 5 element present in the arr is 4*5
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<< " ";
    }
}
