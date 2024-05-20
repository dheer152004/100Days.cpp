//C++ AUTO type specifier
#include <iostream>
#include <typeinfo>
using namespace std;



int main() {
    //int a=10, b=20;
    auto a=10, b=20;
    auto sum =a+b;
    cout<<"sum ="<<sum<<endl;
    cout<<typeid(sum).name()<<endl;
    
    float c=1.2,d=2.4;
    auto sum_f=c+d; 
    cout<<"sum ="<<sum_f<<endl;
    cout<<typeid(sum_f).name()<<endl;
    
    auto f=2.4, e=1.20001;
    auto sum_d=e+f;
    cout<<"sum ="<<sum_d<<endl;
    cout<<typeid(sum_d).name()<<endl;
    
    cout<<endl;
    
    //In pointer
    auto i=100,*p =&i;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&i<<endl;
    cout<<&p<<endl;
    return 0;
}
