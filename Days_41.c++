// C++ weak_ptr
#include <iostream>
#include <memory>
using namespace std;
class Myclass{
    public:
    void Dosomething(){
        cout<<"Doing Something"<<endl;
    }
};

int main() {
    weak_ptr<Myclass>weak;
    {
        shared_ptr<Myclass>shared=make_shared<Myclass>();
        weak=shared;
        
        if(auto sharedFromWeak=weak.lock())
        {
            sharedFromWeak->Dosomething();
            cout<<"Shared uses count :"<<sharedFromWeak.use_count()<<endl;
        }
    }
    if(auto sharedFromWeak=weak.lock())
    {
        //this will not be executed beacuse the object is destroyed
    }
    else{
        cout<<"Object has been destroyed"<<endl;
    }
    
    return 0;
}
