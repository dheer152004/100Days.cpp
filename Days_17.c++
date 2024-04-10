// Member Function Templates & Overloading Template Functions
#include <iostream>
using namespace std;

template <class T>
class Dheeraj{
    public:
    T data;
    Dheeraj(T a){
        data=a;
    }
    void display();//Scope resolution operator
};

//Outside the class
template <class T>
void Dheeraj<T> ::display(){
 cout<<data;
}

void func(int a){
    cout<<"I am first func."<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am tempaltised func."<<a<<endl;
}
int main() {
   // Dheeraj <float>D(5.7878);
    // Dheeraj <char>D('B');
    Dheeraj <int>D(54321);
    cout<<D.data;
    D.display();

    func('s');//Exact match highest priority
    func(45);//Exact match highest priority
    return 0;
}
