// Polymorphism--Function overriding
#include <iostream>
using namespace std;

class operation_parent{
    string money;
    public:
     void same(){
         cout<<"Overriding of Function of parent \n";
     }
     void same2(){
         cout<<"Overriding of Function of parent \n";
     }
};
// create another class with same method in child class
class operation_child:public operation_parent{
    public:
     void same(){
         cout<<"Overriding of Function of child \n";
     }
};

int main() {
    operation_parent obj1;
    operation_child obj2;
    obj1.same();
    obj2.same();
    obj2.same2();
  //to override the method/function by child class
  //we give parent class name then ::(SRO) and then method/function name.
    obj2.operation_parent::same();
    return 0;
}
