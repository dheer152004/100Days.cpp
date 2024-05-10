// DYNAMIC OBJECT IN C++
#include <iostream>
using namespace std;

class Demo{
  int x,y;
  public:
    void getset()
    {
        cout<<"Enter x and y :"<<endl;
        cin>>x>>y;
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
};

int main() {
    Demo *p,*p1;
    p=new Demo;
    p->getset();
    p1=new Demo;
    p->getset();
    
    cout<<"size of pointer :"<<sizeof(p)<<endl;
    delete p; 
    delete p1;
    
    return 0;
}
