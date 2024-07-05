// C++ friend class
#include <iostream>
using namespace std;

class health{
    public:
    friend class fruit;
    char Line[30]="Good for health I am ";
    
    char v1[10]="spinich";
    char v2[10]="carrot";
    char v3[10]="ginger";
    void vegetable()
    {
        
        cout<<Line<<v1<<endl;
        cout<<Line<<v2<<endl;
        cout<<Line<<v3<<endl;
    }
};
class fruit{
    private:
    char f1[10]="apple";
    char f2[10]="papaya";
    char f3[10]="pear";
    
    public:
    
    fruit(health h)
    {
        cout<<h.Line<<f1<<endl;
        cout<<h.Line<<f2<<endl;
        cout<<h.Line<<f3<<endl;
    }
};

int main() {
    health h;
    h.vegetable();
    fruit f(h);
    
return 0;
}
