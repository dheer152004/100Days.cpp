//Infile read from the file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    char ch;
    ifstream infile("QUOET.txt");
    while(infile)
    {
        infile.get(ch);
        cout<<ch;
    }
    cout<<endl;
    return 0;

}
