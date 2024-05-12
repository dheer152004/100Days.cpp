// C++ String
#include <iostream>
using namespace std;

int main() {
    string str;
    string s;
    string s1="Fam";
    string s2="ily";
    
    //s1.append(s2);
    //s=s1+s2;
    //cout<<s<<endl;
    
    s1=s1+s2;
    cout<<s1<<endl;
    cout<<s1[2]<<endl;// it is considering the string as arr
    
    string abc="jsakdhkjsahdkjsa sjdsd";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;
    
    string a1 ="ab";
    string a2 ="yz";
    string a3 ="xyz";
    string a4 ="xyz";
    cout<<a2.compare(a1)<<endl;
    if(a3.compare(a4))
    {
        cout<<a3.compare(a4)<<endl; 
       // cout<<"Strings are equal"<<endl; 
    }
    
    if(!a1.empty())
    {
        cout<<"String is not empty"<<endl;
    }
    a1.clear();
    cout<<endl;
    if(a1.empty())
    {
        cout<<"String now not empty"<<endl;
    }
     

    return 0;
}
