// C++ Const
#include <iostream>
using namespace std;

class Circle{
    const float pi=3.1415;
    float r;
    public:
    Circle(float a)
    {
        r=a;
    }
    float area(){
       return pi*r*r; 
    }
};

int main() {
    Circle c1(5.2);
    Circle c2(3.2);
    cout<<"Area of circle is "<<c1.area()<<endl;
    cout<<"Area of circle is "<<c2.area()<<endl;
    return 0;
}
