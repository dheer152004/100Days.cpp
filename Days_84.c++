// C++ Namespace
#include <iostream>
using namespace std;

namespace Name1
{
    double x=4.56;
    int m=100;
    
    namespace Name2
    {
        double y=1.23;
    }
}
namespace Name3
{
    int m=200;
    int n=300;
}

int main() {
    using namespace Name1;
    
    cout<<"x = "<<x<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"y = "<<Name2::y<<endl;

    using Name3::n;
    cout<<"y = "<<Name3::m<<endl;
    cout<<"n = "<<n<<endl;
    
    return 0;
}
