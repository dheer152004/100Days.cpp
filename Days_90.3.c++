//rdbuf
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream infile("QUOET.txt");

    cout<<infile.rdbuf();
    cout<<endl;

    return 0;
}
