//Polymorphism -- Function overloading

#include <iostream>
using namespace std;

class operation{
    int num1,num2,sum,mult,mult2;
    public:
     int oper(){
         num1=2;
         num2=4;
         sum=num1+num2;
         cout<<sum<<"\n";
         return 0;
     }
     
     int oper(int a, int b){
         mult=a*b;
         cout<<mult<<"\n";
         return 0;
     }
    
};

int main() {
    operation obj;
    obj.oper();
    obj.oper(5,5);
    
    return 0;
}
