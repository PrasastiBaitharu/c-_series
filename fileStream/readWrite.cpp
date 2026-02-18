#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("D:\\CUTM\\Sem-1\\c++ programming\\c++ Basic\\fileStream\\data.txt");

    fout<<"Hello World!"<<endl;
    fout<<"Writing to a file using C++ file stream."<<endl;

    fout.close();

    ifstream fin;
    fin.open("data.txt");

    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}