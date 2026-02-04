#include<iostream>
using namespace std;

int c=0;

void count(int n){
    if(n==0){
        return;
    }
    c++;
    count(n/10);
}

int main(){
    int arr[] = {123,323,414,623};
    for(int i=0 ; i<4 ; i++){
        string rev="";
        count(arr[i]);
        int temp=arr[i];
        for(int j=1 ; j<=c ; j++){
            rev = rev + char(temp%10 + '0');
            temp = temp/10;
        }
        if(arr[i] == stoi(rev)){
            cout<<rev<<" ";
        }
        rev = "";
        c=0;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int c = 0;

// void count(int n){
//     if(n==0){
//         return;
//     }
//     c++;
//     count(n/10);
// }

// int main(){
//     int arr[] = {123,323,414,623};
//     for(int i=0 ; i<4 ; i++){
//         string rev = "";
//         count(arr[i]);
//         int temp=arr[i];
//         for(int j=1 ; j<=c ; j++){
//             rev = rev+char(temp%10+'0');
//             temp = temp/10;
//         }
//         if(arr[i]==stoi(rev)){
//             cout<<arr[i]<<" is a palindrome number"<<endl;
//         }

//         c=0;
//         rev="";
//     }
//     return 0;
// }




















