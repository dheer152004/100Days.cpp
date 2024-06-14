// C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s("ONE TWO THREE FOUR");
    cout<<"The string contains: "<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    for(int j=0;j<s.length();j++)
    {
        cout<<s.at(j);
        
    }
    int x1=s.find("TWO");
    cout<<"\n\nTwo is found at:"<<x1<<endl;
    int x2=s.find_first_of('T');
    cout<<"\nT is found at: "<<x2<<endl;
    int x3=s.find_last_of('R');
    cout<<"\nR is found at: "<<x3<<endl;
    
    cout<<"\nRetrieve and print substring TWO"<<endl;
    
    cout<<s.substr(x1,3);
    cout<<endl;

    return 0;
}
