// C++ Namespace
#include <iostream>
using namespace std;

namespace Name1{
    double x=4.56;
    int m=100;
    
    namespace Name2
    {
        double y=1.23;
    }
}
namespace
{
    int m=200;
}
int main() {
    cout<<"x ="<<Name1::x<<endl;   
    cout<<"m ="<<Name1::m<<endl;   
    cout<<"y ="<<Name1::Name2::y<<endl;   

    cout<<"m ="<<m<<endl;
    return 0;
}
