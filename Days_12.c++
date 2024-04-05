// Base control access control
#include <iostream>
using namespace std;

class base{
    int i ,j;
    public:
     void set(int a, int b){
         i=a;
         j=b;
     }    
     void show(){
        cout<<"Show Fun. of base will show "<<i<<" "<<j<<"\n"<<endl;
    }
};

class derived:public base{
    int k;
    public:
    derived(int x){
         k=x;
    }
    
    void show(){
        base::show();
        cout<<"Show Func. of derived class "<<k<<"\n";
        }
    
   /* void showk(){
        cout<<"Show Func. of derived class "<<k<<"\n";
    }*/
    //This shows we can call (base show func.) in (derived show func.)
    //We don't need to make new func. to show because [d1] will call 
    //derived show func.
    
};
int main() {
    base b1;
    derived d1(3);
    
    d1.set(1,2);//access number of base
    d1.show();//access member of base
   // d1.showk();//access member of base
   
    return 0;
}
