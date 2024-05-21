// C++ Overriding
#include <iostream>
using namespace std;

class shape{
    public:
    virtual double area() const{
        return 0;
    }
};
class circle: public shape{
    private:
    double radius;
    public:
    circle(double r):radius(r){}
    
    //override the base class method
    double area() const override{
        return 3.14*radius*radius;
    }
};
class rectangle:public shape{
    private:
    double width;
    double height;
    public:
    rectangle(double w,double h):width(w),height(h){}
    
    //override the base class method
    double area() const override{
        return width*height;
    }
};

int main() {
    circle c1(5);
    rectangle r1(4,6);
    
    shape*shape=&c1;
    cout<<"Circle's area: "<<shape->area()<<endl;
    
    shape=&r1;
    cout<<"Rectangle's area: "<<shape->area()<<endl;

    return 0;
}
