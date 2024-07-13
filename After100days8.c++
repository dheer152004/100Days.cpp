// C++ abstract class and pur virtual function
#include <iostream>
using namespace std;

class base{
    public:
    virtual void fun()=0;
};
class derived:public base{
    public:
    void fun()
    {
        cout<<"Derived fun function is called"<<endl;
    }
};

int main() {
   base*ptr=new derived;
   derived d;
   d.fun();

    return 0;
}
