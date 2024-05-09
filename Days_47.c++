// Constructor  overloadding and copy constructor
#include <iostream>
using namespace std;

class complex{
    float a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(float x, float y){
        a=x;
        b=y;
    }
    complex(float x)//constructor overloadded
    {
        a=x;
        b=0;
    }
    complex(complex &obj)//copy constructor 
    {
        a=obj.a;
        cout<<"copy constructor called "<<endl;
    }
    
    
    void printnumber()
    {
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main() {
    complex c;
    c.printnumber();
    complex c1(4,6);
    c1.printnumber();
    complex c2 (4.2);
    c2.printnumber();
    
    complex copy(c2);
    copy.printnumber();
    return 0;
}
