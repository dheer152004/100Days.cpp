#include<iostream>
using namespace std;

class base{
    public:
    base(){ cout<<"Base Class Constructor called"<<endl; }
   virtual ~base(){ cout<<"Base Class Destructor called"<<endl; }
};

class derived:public base{
    public:
    derived(){ cout<<"Derived Class Constructor called"<<endl;}
    ~derived(){ cout<<"Derived Class Destructor called"<<endl;}
};

int main(){
    base*b1=new derived;
    
    delete b1;
    return 0;
}
// we can't make virtual constructor
// when we don't add [virtual] in base destructor, it will call only base class and not call derived class destructor.
