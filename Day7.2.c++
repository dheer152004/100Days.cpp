// Abstraction is techique in which we can only show necessary
// data to the user and hide sensitive data
#include <iostream>
using namespace std;

class vehicle{
    public:
    string name;
    
    private:
    int internal_price=30000;
    
    public:
     void body(){
     name="Splaender";
     internal_price=58000;
          cout<<"Vechicle Data :"<<name<<internal_price<<endl;
      }
    
};

int main() {
    vehicle obj;
    //internal_price is sesitive only company know
    //so private that member so user cannot access
    // cout<<obj.internal_price;
    obj.body();
    cout<<"Vechicle name:"<<obj.name;
    return 0;
}
