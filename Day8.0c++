// Operator overloading
#include <iostream>
using namespace std;

class B{
    public:
    int a;
    int b;
    
    public:
    int add(){
        return a+b;
    }
    void operator% (B &obj){
        int value1= this->a;
        int value2= obj.a;
        cout<<"Output: " <<value2-value1<<endl;
        
        cout<<"Hello Dheeraj";
    }
        
    void operator()(){
        cout<<"I am  baracket"<<this->a<<endl;
    }
    void operator[](int a){
        cout<<"I am  [] operrator"<<endl;
    }
    void operator++(int v){
        cout<<"I am  ++ operrator"<<endl;
    }
    void operator--(int m){
        cout<<"I am  -- operrator"<<endl;
    }
    void operator +=(int n){
        cout<<"I am  += operrator"<<endl;
    }
    void operator ==(int po){
        cout<<"I am  == operrator"<<endl;
    }
    void operator <<(int p){
        cout<<"I am  << operrator"<<endl;
    }
    void operator ||(int pod){
        cout<<"I am  || operrator"<<endl;
    }
};

int main() {
    B obj1, obj2;
    obj1.a=4;
    obj2.a=7;
    obj1%obj2;
    
    obj1();
    obj1[1];
    obj1++;
    obj1--;
    obj1+=4;
    obj1==4;
    obj1<<4;
    obj1||4;
    

    return 0;
}
