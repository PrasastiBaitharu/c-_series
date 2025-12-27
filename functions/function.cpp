
#include<iostream>
using namespace std;
//Without argument without return type
// void display(){
//     cout<<"Hello World";
// }

// int main (){
//     display();
// }



//With argument without return type
// void display(string name){
//     cout<<name;
// }

// int main(){
//     display("Yashmin");
// }



//Without argument with return type
// int add(){
//     return 5+2;
// }

// int main(){
//     int sum = add();
//     cout<<sum;
// }



//With argument with return type
int add(int para1 , int para2){
    return para1+para2;
}

int main(){
    int sum = add(5,2);
    cout<<sum;
}