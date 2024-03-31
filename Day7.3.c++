// How to access private member funtion 
#include <iostream>
using namespace std;

class name{
    private:
    void read();
    public:
    void show();
};

void name::read(){
    cout<<"I am in private\n";
}
void name::show(){
  // To access private member function we have to
  // define in public member function
    read();
    cout<<"I am in public\n";
}

int main() {
    name obj;
    obj.show();
   
    return 0;
}
