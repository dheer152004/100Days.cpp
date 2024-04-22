//This Pointer
#include <iostream>
using namespace std;

class Demo
{
    int a,b;
    public:
    
   /* Demo(int x, int y)
    {
        a=x;
        b=y;
    }*/
    
    //In this complier will confuse between instance
    //variable or local variabe
    
    Demo()
    {int a=50; 
     int b=20;
        //first a is instance variable and other one is 
        //local variable
        this->a=a;
        this->b=b;
    }
  void show()
    {
    cout<<a<<" "<<b<<endl;    
    }    
};

int main() {
    Demo d;
    d.show();
    d.show();

    return 0;
}
