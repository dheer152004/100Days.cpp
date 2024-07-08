// C++ virtual destructor
#include <iostream>
using namespace std;

class Base {
public:
Base() { cout<<"Base Constructor called"<<endl; }
virtual~Base() { cout<<"Base destructor called"<<endl; }
};

class Derived : public Base {
public:
Derived() { cout<<"Derived constrctor called"<<endl; }
~Derived() { cout<<"Derived destructor called"<<endl; }
};

int main(){
Base* b = new Derived();
delete b;

return 0;
}
