// copy constructor
#include <iostream>
using namespace std;

class car{
    int x;
    int y;
    public:
    
    car(int a, int b){
        x=a;
        y=b;
        cout<<"constructor is parameterised"<<endl;
        cout<<x<<"\t"<<y<<endl;
    }
   //0. constructor should always in public. 
   //1. we create same constructor
   //2. to make we made class name and reference
   //3. we create data members in private.
   //4. we copy the value of a and b in x and y.
   //5. we transfer the copy value in x and y in copy constructor
    car(car &refer){
        x=refer.x;
        y=refer.y;
        cout<<"copy constructor is parameterised"<<endl;
        cout<<x<<"\t"<<y<<endl;
    }
    
    void show(){
        cout<<"This is also called"<<endl;
    }
};

int main() {
  car obj(4,5);
  car obj2=obj;
  obj.show();

    return 0;
}
