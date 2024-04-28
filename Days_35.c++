//Template in C++
#include <iostream>
using namespace std;

// Class template
template <class X>
class demo{
    X num1,num2;
    public:
    demo(X n1, X n2)
    {
        num1=n1;
        num2=n2;
    }
    void check()
    {
          if(num1>num2)
          {
              cout<<num1<<" is the largest number"<<endl;
          }
          else
          {
              cout<<num2<<" is the largest number"<<endl;
              
          }
    }
};
    
    //Function Template   
   template<class T>
   T sum(T a,T b){
        cout<<"Total is :"<<a+b<<endl;
        return 0;
    }
int main() {
    demo<int> d1(5.1,5.2);
    demo<float> d2(5.1,5.2);
    d1.check();
    d2.check();
    sum(2.45,2.4); 
    sum(2,2); 
    return 0;
}
