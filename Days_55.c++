//C++ pointer
#include <iostream>
using namespace std;


int main() {
    int a=30;
    cout<<a<<endl;
    
    int x=10;
    // int y=x;
    // cout<<y<<endl;
    
    int *p;
    p=&x;
    cout<<"In x has value of x :"<<x<<endl;
    cout<<"In &x has address of x :"<<&x<<endl;
    cout<<"In p has address of x :"<<p<<endl;
    cout<<"In *p has value of x :"<<*p<<endl;
    cout<<"In &p has address of p :"<<&p<<endl;

    return 0;
}
