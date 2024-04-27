// Exception handling
#include <iostream>
using namespace std;

int main() {
    float a,b,c;
    cout<<"Enter Two numbers : "<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"\nDivision="<<c<<endl;
        }
        else
        {
            throw b;
        }
    }
    catch(float f) //we can also use another variable name because
  //catch(float b) whatever we throw will come in catch parameter
    {
        cout<<"\nDivide by "<<f<<" error."<<endl;
    }
    return 0;
}
