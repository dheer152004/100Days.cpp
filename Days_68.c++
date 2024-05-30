// C++ shared_ptr
#include <iostream>
#include <memory>
using namespace std;

class Foo{
    int x;
    public:
    Foo(int x):x{x}{}
    int getx(){
        return x;
    }
    ~Foo(){
        cout<<"~Foo"<<endl;
    }
};

  int main() {
  Foo *f =new Foo(1);
  cout<<f->getx()<<endl;
  delete f;
  
// new way by shared pointer
shared_ptr<Foo>sp(new Foo(100));
cout<<sp->getx()<<endl;
shared_ptr<Foo>sp1=sp;//not used as reference or pointer
cout<<sp.use_count()<<endl;
cout<<sp1.use_count()<<endl;

    return 0;
}
