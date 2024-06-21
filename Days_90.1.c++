//File output
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str="Time is great teacher, but unfortunatly\n"
                "it kills all its pupils. Berlioz";

    ofstream outfile("QUOET.txt");
    for(int j=0;j<str.size();j++)
    {
        outfile.put(str[j]);
    }
    cout<<"File Written\n";

    return 0;
}
