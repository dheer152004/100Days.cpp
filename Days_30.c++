// Dynamic Casting in C++
//syntax: dynamic_cast<new_type>(expression)

// Dynamic_cast is used at run time to find out correct down_cast 
//1.Must have virtual function in base class
//2.If the cast is successful, dynamic_cast returns a value of new_type.
//If cast fails and new_type is is pointer type,it returns a null pointer of that type.
//If cast fails and new_type is reference type, it throws an exception that matche a handler of type std::bad_cast

#include <iostream>
#include<exception>
using namespace std;

class base{
    virtual void print()
     {
         cout<<"Base"<<endl;
     }
};

class derived1:public base{
    void print()
    {
        cout<<"Derived 1"<<endl;
    }
};
class derived2:public base{
    void print()
    {
        cout<<"Derived 2"<<endl;
    }
};

int main() {
  derived1 d1;
  
  base*bp=dynamic_cast<base*>(&d1);
  derived1 *dp2=dynamic_cast<derived1*>(bp);
 // derived1 *dp1=dynamic_cast<derived1*>(bp);
  if(dp2==nullptr)
    cout<<"Null"<<endl;
  else    
    cout<<"NOT NUll"<<endl;
    
try{    
  derived2 &r1=dynamic_cast<derived2&>(d1);   
}
catch(std::exception& e)
{
    cout<<e.what()<<endl;
}
    return 0;
}
