// Online C++ Dynamic Casting
#include <iostream>
using namespace std;

//1.dynamic_cast is runtime cast operator used to perform conversion
//  of one type variable to another only on class pointer and reference

//2.It means it checks the valid casting of the variable at runtime and
//  if casting fails, it returns a NULL pointer


//dynamic_cast<new_data_type>(expression);

class Base{
    virtual void message(){
        
    }
    
};

class derived: public Base{
    
};

int main() {
    Base b1;
    derived d1;
   
    /* 
    Base *pb =dynamic_cast<Base*>(&d1);
    derived*pd=dynamic_cast<derived*>(&b1);//require polymorphic virtual function
    */
    //new way 
    Base *ptr =new derived;
    derived*new_pd=dynamic_cast<derived*>(ptr);
    
    if(new_pd!=NULL){
        cout<<"Dynamic Casting done successfully"<<endl;
    }
    else{
        cout<<"Dynamic Casting has failed"<<endl;
    }
    
    return 0;
}
