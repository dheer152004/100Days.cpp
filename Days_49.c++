// C++ String
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter Your string"<<endl;
    cin>>str;
    cout<<str<<endl;
    
    string str1(5,'s');
    cout<<str1<<endl;
      
    string str_name="Dheeraj is Here";  
    cout<<str_name<<endl;
    
    string str_cin;
    cout<<"Enter the line"<<endl;
    //cin>>str_cin;
    getline(cin,str_cin);
    cout<<str_cin<<endl;
    
    
    string str_cin2;
    cout<<"Enter the line again"<<endl;
    //getline(cin,str_cin2);
    
    cout<<str_cin2<<endl;

    

    return 0;
}
