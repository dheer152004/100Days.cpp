// C++ pointer to function
#include <iostream>
using namespace std;

class my_class{
    int num;
    public:
    void set_num(int value)
    {
           num=value;
    }
    void show_num();
};
void my_class::show_num()
{
       cout<<"Number = "<<num<<endl;
}

int main() {
    my_class obj,*p,*p2;
    
    obj.set_num(1);
    obj.show_num();
    
    p=&obj;
    p->show_num();
    
    p2=&obj;
    p2->show_num();
    return 0;
}
