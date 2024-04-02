// Virtual function
#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base=1;
    virtual
     void display(){
         cout<<"1.Dispaly Base class variable var_base"<<var_base<<endl;
     }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived=2;
     void display(){
         cout<<"2.Dispaly Base class variable var_base"<<var_base<<endl;
         cout<<"2.Dispaly Derived class variable var_base"<<var_derived<<endl;
     }
};
int main() {
  //we create pointer of BaseClass
  //we create obj of base class.
  //we create obj of derived class.
 BaseClass*base_class_pointer;
 BaseClass obj_base;
 DerivedClass obj_derived;
  
 //we passed the address of derived class object.
 //we passed display() in base_class_pointer.

 //virtual makes blockage of base class and pass derived class
 base_class_pointer= &obj_derived;
 base_class_pointer->display();

    return 0;
}
