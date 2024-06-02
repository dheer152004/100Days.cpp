// C++ mutable
#include <iostream>
using namespace std;

class ABC{
    private:
    mutable int m;
    public:
    explicit ABC(int x=0)
    {
        m=x;
    }
    void change() const
    {
        m=m+10;
    }    
    int display()const
    {
        return m;
    }
    
};
int main() {
     const ABC abc(100);
     cout<<"abc contains :"<<abc.display()<<endl;
     
     abc.change();
     cout<<"abc now contains :"<<abc.display()<<endl;
     cout<<endl;
    

    return 0;
}
