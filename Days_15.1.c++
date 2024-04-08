// Templates with specified data types
#include <iostream>
using namespace std;

// In this we have provided data types of classes which will be its 
// default data types in objects until we don't specify other data types
template<class T1=int, class T2=float ,class T3=char>
class Dheeraj{
    public:
    T1 a;
    T2 b;
    T3 c;
    Dheeraj(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"_________________________________________"<<endl;
    }
};
int main() {
  //Here we have pass the values according to templates
  //Blank data type in <> show default data types
    Dheeraj<> d(4,6.7,'C');
    Dheeraj<> d2(40,60.7,'S');
    d.display();
    d2.display();

  //Here we have passed the values according to provided data types 
    Dheeraj<float,char,char> j(4.633,'B','C');
    Dheeraj<int, char,float>j2(40,'W',60.7);
    j.display();
    j2.display();
    
    return 0;
}
