// templates
#include <iostream>
using namespace std;

template <class type1, class type2>
void myfunc(type1 x, type2 y){
    cout<<x<<" "<<y<<"\n";
}
int main() {
    myfunc(10,"I ilke c++");
    myfunc(98.6,19L);
    myfunc("This is my first code in C++ tempates","");
    return 0;
}
