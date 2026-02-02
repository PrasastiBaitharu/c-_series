#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    for(int i=0 ; i<6 ; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<"is even"<<endl;
        }else{
            cout<<arr[i]<<"is odd"<<endl;
        }
    }
    return 0;
}