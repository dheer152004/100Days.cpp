// Exception handling
/*
try
{ put risky code that might throw an exception
}
catch(exception e)
{
    code to handle the exceotion
}
*/
#include <iostream>
#include<exception>
using namespace std;

int main() {
    double bal=1000;
    try
    {
        double amt;
        cout<<"enter deposite amount"<<endl;
        cin>>amt;
        if(amt<=0)
        {
        //cout<<"Invalid deposite amount"<<endl;
         throw invalid_argument("Invalid deposite amount");
        }
        bal=bal+amt;
        cout<<"Available amount :"<<bal<<endl;
        
        cout<<"enter withdrawan amount"<<endl;
        cin>>amt;
        if(amt<=0)
        {
        //cout<<"Invalid withdrawan amount"<<endl;
        throw runtime_error("Insufficient amount");
        }
        if(amt>bal){
            cout<<"Insufficient amount"<<endl;
        }
        bal=bal-amt;
        cout<<"Available amount :"<<bal<<endl;
    }
    catch(exception& e)
    {
        cout<<e.what();
    }
    
    int a=10,b=0;
    int c=a/b;
    cout<<"Result :"<<c<<endl;
    //code will terminate from here
    cout<<"My name is Dheeraj"<<endl;
    
    
    
    return 0;
}
