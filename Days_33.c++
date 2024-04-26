// Objects of array
//By Getter and Setter
#include <iostream>
using namespace std;
class Demo{
    public:
    int a;
    
    Demo():a(0){}
    Demo(int i):a(i){}
    // void display(){
    //     cout<<"Number ="<<a<<endl;
    // }
    int getA() const{
        return a;
    }
    void setA(int value)
    {
        a=value;
    }
};
int main() {
    Demo d[10];
    for(int i=0;i<10;i++)
    {
        d[i].setA(i);
    }
    for(int i=0;i<10;i++)
    {
       cout<<"Number ="<< d[i].getA()<<endl;
    }

    
    return 0;
}
