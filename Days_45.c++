// Function overloading
#include <iostream>
using namespace std;

class function{
    public:
    void fun(){
        cout<<"I am function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"I am function with argument int argument"<<endl;
    }
    void fun(double x){
        cout<<"I am function with argument double argument"<<endl;
    }
};

int main() {
    function obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    
    return 0;
}
