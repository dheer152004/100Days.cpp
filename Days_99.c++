// C++ copy constructor
#include <iostream>
using namespace std;

class alpha
{
    private:
    int data;
    public:
      alpha()
        { }
      alpha( int d)
        {
            data=d;
        }
      alpha( alpha& a)
        {
            data=a.data;
            cout<<"copy constructor invoked"<<endl;
        }
      void display()
        {
            cout<<data;
        }
      void operator=(alpha& a)
        {
            data=a.data;
            cout<<"Assignment operator invoked"<<endl;
        }
};

int main() {
    alpha a1(37);
    alpha a2;
    
    //a2(a1);
    a2=a1;
    cout<<"a2="; a2.display();
    
    alpha a3(a1);
    //alpha a3=a1;
    cout<<"a3="; a3.display();
    cout<<endl;
    return 0;
}
