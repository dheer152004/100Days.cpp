//C++ Partial Template specialization
#include <iostream>
using namespace std;

template<typename T>
struct Mytemplate
    {
    static const char*name()
        {
            return "General case";
        }
    };
template<typename T>
struct Mytemplate<T*>
    {
        static const char*name()
        {
            return "Partial specilization for pointer";
        }
    };
    
template<>
struct Mytemplate<int>
    {
        static const char*name()
        {
            return "Full specialization for int";
        }
    };

int main() {
    Mytemplate<double> t1;//General case
    Mytemplate<double*> t2;//Partial specialization for pointer
    Mytemplate<int> t3;//Full specialization for int
    
    cout<<t1.name()<<endl;
    cout<<t2.name()<<endl;
    cout<<t3.name()<<endl;

    return 0;
}
